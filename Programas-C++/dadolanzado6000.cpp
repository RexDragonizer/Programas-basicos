#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;

int main()
{
    int frecuencia1 = 0;
    int frecuencia2 = 0;
    int frecuencia3 = 0;
    int frecuencia4 = 0;
    int frecuencia5 = 0;
    int frecuencia6 = 0;

    int cara;

    for ( int tiro = 1; tiro <= 600000; tiro++)
    {
        cara = 1 + rand() % 6;

        switch ( cara )
        {
            case 1:
                 ++frecuencia1;
                 break;
            case 2:
                 ++frecuencia2;
                break;
            case 3:
                 ++frecuencia3;
                 break;
            case 4:
                 ++frecuencia4;
                 break;
            case 5:
                 ++frecuencia5;
                 break;
            case 6:
                 ++frecuencia6;
                 break;
            default:
                cout << "El programa nunca debio llegar aqui";
        }
    }

    cout << "Cara" << setw( 13 ) << "Frecuencia" << endl;
    cout << "   1" << setw( 13 ) << frecuencia1
       << "\n   2" << setw( 13 ) << frecuencia2
       << "\n   3" << setw( 13 ) << frecuencia3
       << "\n   4" << setw( 13 ) << frecuencia4
       << "\n   5" << setw( 13 ) << frecuencia5
       << "\n   6" << setw( 13 ) << frecuencia6 << endl;

    return 0;

}
