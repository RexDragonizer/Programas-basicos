#include <iostream>
using std::cout;
using std::endl;

void imprimirCaracteres( const char * );

int main()
{
    const char frase[] = "imprimir caracteres de una cadena";

    cout << "La cadena es:\n";
    imprimirCaracteres( frase );
    cout << endl;
    return 0;
}

void imprimirCaracteres( const char *sPtr )
{
    for ( ; *sPtr != 0; sPtr++ )
        cout << *sPtr;
}
