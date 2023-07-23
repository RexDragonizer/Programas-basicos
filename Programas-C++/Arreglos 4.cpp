#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const int tamanioArreglo = 10;
    int a[ tamanioArreglo ] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    int total = 0;

    for ( int i = 0; i < tamanioArreglo; i++ )
        total += a[ i ];

    cout << "Total de elementos del arreglo: " << total << endl;

    return 0;
}
