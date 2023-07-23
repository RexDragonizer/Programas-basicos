#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int tamanioArreglo = 11;
    int n[ tamanioArreglo ] = { 0, 0 ,0, 0, 0, 0, 1, 2, 4, 2, 1 };

    cout << "Distrucion de califiacaciones: " << endl;

    for ( int i = 0; i < tamanioArreglo; i++ )
    {
         if ( i == 0 )
            cout << "  0-9: ";
        else if ( i == 10 )
            cout << "  100: ";
        else
            cout << i * 10 << "-" << ( i * 10 ) + 9 << ": ";

    for ( int estrellas = 0; estrellas < n[ i ]; estrellas++)
        cout << "*";
        cout << endl;
    }
    return 0;
}
