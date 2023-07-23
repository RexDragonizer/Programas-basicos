#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;

int main()
{
    for ( int contador = 1; contador <= 20; contador++ )
    {
        cout << setw( 10 ) << ( 1 + rand() % 6 );

        if ( contador % 5 == 0 )
        cout << endl;

    }

    return 0;
}
