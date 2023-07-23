#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

int main()
{
    unsigned seed;

    cout << "Introduzca la semilla: ";
    cin >> seed;
    srand( seed );

    for ( int contador = 1; contador <= 10; contador++ )
    {
        cout << setw( 10 ) << ( 1 + rand() % 6 );

        if ( contador % 5 == 0 )
        cout << endl;

    }

    return 0;
}
