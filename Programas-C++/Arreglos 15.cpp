#include <iostream>
using std::endl;
using std::cout;

size_t getSize( double * );

int main()
{
    double arreglo[ 20 ];

    cout << "EL numero de bytes en el arreglo es " << sizeof( arreglo );

    cout << "\nEl numero de bytes devueltos por getSize es " << getSize( arreglo ) << endl;

    return 0;
}

size_t getSize( double *ptr )
{
    return sizeof( ptr );
}
