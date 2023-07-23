#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
    const int tamanioArreglo = 7;
    int frecuencia[ tamanioArreglo ] = {};

    srand( time( 0 ));

    for ( int tiro = 1; tiro <= 6000000; tiro++ )
        frecuencia[ 1 + rand()% 6 ]++;

    cout << "Cara" << setw( 13 ) << "Frecuencia" << endl;

    for ( int cara = 1; cara < tamanioArreglo; cara++ )
    cout << setw( 4 ) << cara << setw ( 13 ) << frecuencia[ cara ] << endl;

    return 0;
}
