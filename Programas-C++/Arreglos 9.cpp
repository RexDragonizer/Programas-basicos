#include <iostream>
using std::cout;
using std::endl;

void inicArregloStatic( void );
void inicArregloAutomatico( void );

int main()
{
    cout << "Primera llamada a cada funcion:\n";
    inicArregloStatic();
    inicArregloAutomatico();

    cout << "\n\nSegunda llamada a cada funcion:\n";
    inicArregloStatic();
    inicArregloAutomatico();
    cout << endl;

    return 0;
}

void inicArregloStatic( void )
{

    static int arreglo1[ 3 ];

    cout << "\nValores al entrar en inicArrehloStatic:\n";
    for ( int i = 0; i < 3; i++ )
        cout << "arreglo1[" << i << "] = " << arreglo1[ i ] << " ";

    cout << "\nValores al salir de inicArregloStatic:\n";

    for ( int j = 0; j < 3; j++ )
        cout << " arreglo1[" << j << "] = " << ( arreglo1[ j ] += 5 ) << " ";
}

void inicArregloAutomatico( void )
{

    int arreglo2[ 3 ] = { 1, 2, 3 };

    cout << "\n\nValores al entrar a inicArregloAutomatico:\n";

    for ( int i = 0; i < 3; i++ )
        cout << "arreglo2["  << i << "] = " << arreglo2[ i ] << " ";

    cout << "\nValoores al salir de inicArregloAutomatico:\n";

    for ( int j = 0; j < 3; j++)
        cout << "arreglo2[" << j << "] = " << ( arreglo2 [ j ] += 5) << " ";
}
