//Arreglos multidimensionales
#include <iostream>
using std::cout;
using std::endl;

void imprimirArreglo( const int[][ 3 ] );

int main()
{
    int arreglo1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
    int arreglo2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };
    int arreglo3[ 2 ][ 3 ] = { {1, 2 }, { 4 } };

    cout << "Los valores en arreglo1 por fila son:" << endl;
    imprimirArreglo( arreglo1 );

    cout << "\nLos valores en arreglo2 por fila son:" << endl;
    imprimirArreglo( arreglo2 );

    cout << "\nLos valores en arreglo3 por fila son:" << endl;
    imprimirArreglo( arreglo3 );

    return 0;
}

void imprimirArreglo( const int a[][ 3 ] )
{
    for ( int i = 0; i < 2; i++ )
    {
        for ( int j = 0; j < 3; j++ )
            cout << a[ i ][ j ] << ' ';

        cout << endl;
    }
}
