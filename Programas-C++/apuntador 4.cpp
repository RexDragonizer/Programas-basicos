#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::toupper;

void convertirAMayusculas( char *);

int main()
{
    char frase[] = "carateres y $32.98";

    cout << "La frase antes de la conversion es: " << frase;
    convertirAMayusculas( frase );
    cout << "\nLa frase despues de la conversion es: " << frase << endl;
    return 0;
}

void convertirAMayusculas( char *sPtr )
{
    while ( *sPtr != '\0' )
    {
        if ( islower( *sPtr ) )
            *sPtr = toupper( *sPtr );

        sPtr++;
    }
}
