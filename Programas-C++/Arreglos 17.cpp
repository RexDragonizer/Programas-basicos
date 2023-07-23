#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int b[] = { 10 , 20, 30, 40 };
    int *bPtr = b;

    cout << "Se imprime el arreglo b con:\n\nNotacion de subindice de arreglo\n";

    for ( int i = 0; i < 4; i++ )
        cout << "b[" << i << "]" << b[ i ] << '\n';

    cout << "\nNotacion apuntador/desplazamiento  en donde "
    << "el apuntador es el nombre del arreglo\n";

    for ( int desplazamiento1 = 0; desplazamiento1 < 4; desplazamiento1++ )
        cout << "*(b +" << desplazamiento1 << ") = " << *( b + desplazamiento1 ) << '\n';

    cout << "\nNotacion de subindice de apuntador\n";

    for ( int j = 0; j < 4; j++ )
        cout << "bPtr[" << j << "] = " << bPtr[ j ] << '\n';

    cout << "\nNotacion apuntador desplazamiento\n";

    for ( int desplazamiento2 = 0; desplazamiento2 < 4; desplazamiento2++ )
        cout << "*(bPtr + " << desplazamiento2 << ") = " << *( bPtr + desplazamiento2 ) << '\n';
    return 0;
}
