#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

void imprimirVector( const vector< int > & );
void recibirVector( vector< int > & );

int main()
{
    vector< int > enteros1( 7 );
    vector< int > enteros2( 10 );

    cout << "El tamanio del vector enteros1 es " << enteros1.size() << "\nvector despues de la inicializacion:" << endl;
    imprimirVector( enteros1 );

    cout << "\nEl tamanop del vector enteros2 es " << enteros2.size() << "\nvevtor despues de la inicializacion:" << endl;
    imprimirVector( enteros2 );

    cout << "\nEscriba 17 enteros: " << endl;
    recibirVector( enteros1 );
    recibirVector( enteros2 );

    cout << "\nEvaluacion: enteros1 != enteros2" << endl;

    if( enteros1 != enteros2 )
        cout << "enteros1 y enteros2 no son iguales" << endl;

    vector< int > enteros3( enteros1 );

    cout << "\nEl tamanio del vector enteros3 es " << enteros3.size() << "\nvector despues de la inicializacion:" << endl;
    imprimirVector( enteros3 );

    cout << "\nAsignacion de enteros2 a enteros1:" << endl;
    enteros1 = enteros2;

    cout << "enteros1:" << endl;
    imprimirVector( enteros1 );
    cout << "enteros2:" << endl;
    imprimirVector( enteros2 );

    cout << "\nEvaluacion: enteros1 == enteros2" << endl;

    if ( enteros1 == enteros2 )
        cout << "enteros1 y enteros2 son iguales" << endl;

    cout << "\nenteros1[5] es " << enteros1[ 5 ];

    cout << "\n\nArsignacion de 1000 a enteros[5]" << endl;
    enteros1[ 5 ] = 1000;
    cout << "enterps1:" << endl;
    imprimirVector( enteros1 );

    cout << "\nIntento de asignar 1000 a enteros1.at( 15 )" << endl;
    enteros1.at( 15 ) = 1000;

    return 0;
}

void imprimirVector( const vector < int > &arreglo )
{
    size_t i;

    for ( i = 0; i < arreglo.size(); i++ )
    {
        cout << setw( 12 ) << arreglo[ i ];

        if ( ( i + 1 ) % 4 == 0 )
            cout << endl;
    }

    if ( i % 4 != 0)
        cout << endl;
}
void recibirVector( vector< int > &arreglo )
{
    for ( size_t i = 0; i < arreglo.size(); i++ )
        cin >> arreglo[ i ];
}

