//Uso de strlen
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;

int main()
{
    char *cadena1 = "abcdefghijklmnopqrstuvwxyz";
    char *cadena2 = "cuatro";
    char *cadena3 = "Boston";

    cout << "La longitud de \"" << cadena1 << "\" es " << strlen( cadena1)
    << "\nLa longitud de \"" << cadena2 << "\" es " << strlen( cadena2 )
    << "\nLa longitud de \"" << cadena3 << "\" es " << strlen( cadena3 ) << endl;
    return 0;
}
