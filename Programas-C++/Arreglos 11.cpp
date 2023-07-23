#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int busquedaLineal( const int [], int, int );

int main()
{
    const int tamanioArreglo = 100;
    int a[ tamanioArreglo ];
    int claveBusqueda;

    for ( int i = 0; i < tamanioArreglo; i++ )
        a[ i ] = 2 * i;

    cout << "Introduzca la clave de busqueda entera: ";
    cin >> claveBusqueda;

    int elemento = busquedaLineal( a, claveBusqueda, tamanioArreglo );

    if( elemento != -1 )
        cout << "Se encontro el valor en el elemento " << elemento << endl;
    else
        cout << "No se encontro el valor" << endl;

    return 0;
}

int busquedaLineal( const int arreglo[], int clave, int tamanioDelArreglo )
{
    for ( int j = 0; j < tamanioDelArreglo; j++ )
        if ( arreglo [ j ] == clave )
        return j;

    return -1;
}
