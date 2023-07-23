#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <iomanip>
using std::setw;

void ordenamientoSeleccion( int [], const int, bool (*)( int, int ) );
void intercambiar( int * const, int * const );
bool ascendente( int, int );
bool descentente( int, int );

int main()
{
    const int tamanioArreglo = 10;
    int orden;
    int contador;
    int a[ tamanioArreglo ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    cout << "Escriba 1 para orden ascendente, \n"
       << "Escriba 2 para orden descente: ";
    cin >> orden;
    cout << "\nElementos de datos en el orden original\n";

    for ( contador = 0; contador < tamanioArreglo; contador++ )
        cout << setw( 4 ) << a[ contador ];

    if ( orden == 1)
    {
        ordenamientoSeleccion( a, tamanioArreglo, ascendente );
        cout << "\nElementos de datos en orden ascendente\n";
    }

    else
    {
        ordenamientoSeleccion( a, tamanioArreglo, descentente );
        cout << "\nElementos de datos en orden descendente\n";
    }

    for ( contador = 0 ; contador < tamanioArreglo; contador++ )
        cout << setw( 4 ) << a[ contador ];

    cout << setw( 4 ) << a[ contador ];

    cout << endl;
    return 0;
}

void ordenamientoSeleccion( int trabajo[], const int tamanio, bool (*compara)( int, int ) )
{
    int menorOMayor;

    for ( int i = 0; i < tamanio - 1; i++ )
    {
        menorOMayor = i;

        for ( int index = i + 1; index < tamanio; index++ )
            if ( !(*compara)( trabajo[ menorOMayor ], trabajo[ index ] ) )
            menorOMayor = index;

        intercambiar( &trabajo[ menorOMayor ], &trabajo[ i ] );
    }
}

void intercambiar( int * const elemento1Ptr, int * const elemento2Ptr )
{
    int contenido = *elemento1Ptr;
    *elemento1Ptr = *elemento2Ptr;
    *elemento2Ptr = contenido;
}

bool ascendente( int a, int b )
{
    return a < b;
}

bool descentente( int a, int b )
{
    return a > b;
}
