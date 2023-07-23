//Ordenamiento de valores en forma ascendente
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int tamanioArreglo = 10;
    int datos[ tamanioArreglo ] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };
    int insertar;

    cout << "Arreglo desordenado: \n";

    for ( int i = 0; i < tamanioArreglo; i++ )
        cout << setw( 4 ) << datos[ i ];

    for ( int siguiente = 1; siguiente < tamanioArreglo; siguiente++ )
    {
        insertar = datos[ siguiente ];

        int moverElemento = siguiente;

        while ( ( moverElemento > 0 ) && ( datos[ moverElemento - 1 ] > insertar ))
        {

            datos[ moverElemento ] = datos[ moverElemento - 1 ];
            moverElemento--;
        }

        datos[ moverElemento ] = insertar;
    }

    cout << "\n Arreglo Ordenado:\n";

    for( int i = 0; i < tamanioArreglo; i++ )
        cout << setw( 4 ) << datos[ i ];

    cout << endl;

    return 0;
}
