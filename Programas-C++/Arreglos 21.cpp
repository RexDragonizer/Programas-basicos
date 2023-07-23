//Uso de strcpy y strncpy
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strcpy;
using std::strncpy;

int main()
{

    char x[] = "Feliz cumpleanios a ti";
    char y[ 25 ];
    char z[ 18 ];
    strcpy( y, x );

    cout << "La cadena en el arreglo x es: " << x << "\nLa cadena en el arreglo y es: " << y << "\n";

    // copia los primeros 17 caracteres de x a z
    strncpy( z, x, 17 ); //no copia el caracter nulo
    z[ 17 ] = '\0';

    cout << "La cadena en el arreglo z es: " << z << endl;
    return 0;

}
