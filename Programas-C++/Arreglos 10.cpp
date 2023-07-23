#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void modificarArreglo( int [], int );
void modificarElemento( int );

int main()
{
    const int tamanioArreglo = 5;
    int a[ tamanioArreglo ] = { 0, 1, 2, 3, 4};

    cout << "Efectos de pasar todo el arreglo por referencia:" << "\n\nLos Valores del arreglo original son:\n";

    for ( int i = 0; i < tamanioArreglo; i++ )
        cout << setw( 3 ) << a[ i ];

    cout << endl;

    modificarArreglo( a, tamanioArreglo );
    cout << "Los valores del arreglo modificado son:\n";

    for ( int j = 0; j < tamanioArreglo; j++ )
        cout << setw( 3 ) << a[ j ];

    cout << "\n\n\nEfectos de pasar el elemento del arreglo por valor:" << "\n\na[3] antes de modificarElemento:" << a[ 3 ] << endl;

    modificarElemento( a[ 3 ] );
    cout << "a[3] despues de modificarElemento: " << a[ 3 ] << endl;

    return 0;
}

void modificarArreglo( int b[], int tamanioDeArreglo )
{

    for ( int k = 0; k < tamanioDeArreglo; k++ )
        b[ k ] *= 2;
}

void modificarElemento( int e )
{
    cout << "Valor del elemento en modificarElemento: " << ( e *= 2 ) << endl;
}
