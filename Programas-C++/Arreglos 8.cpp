#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    char cadena1[ 20 ];
    char cadena2[] = "literal de la cadena";

    cout << "Escriba la cadena \"hola todos\": ";
    cin >> cadena1;

    cout << "cadena1 es: " << cadena1 << "\ncadena2 es: " << cadena2;

    cout << "\ncadena1 con espacios entre caracteres es:\n";

    for( int i = 0; cadena1[ i ] != '\0'; i++ )
        cout << cadena1[ i ] << ' ';

    cin >> cadena1;
    cout << "\ncadena1 es: " << cadena1 << endl;

    return 0;

}
