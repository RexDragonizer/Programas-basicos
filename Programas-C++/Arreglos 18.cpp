#include <iostream>
using std::cout;
using std::endl;

void copia1( char *, const char * );
void copia2( char *, const char * );

int main()
{
    char cadena1[ 10 ];
    char *cadena2 = "Hola";
    char cadena3[ 10 ];
    char cadena4[] = "Hasta luego";

    copia1( cadena1, cadena2 );
    cout << "cadena1 = " << cadena1 << endl;

    copia2( cadena3, cadena4 );
    cout << "cadena3 = " << cadena3 << endl;
    return 0;
}

void copia1( char * s1, const char * s2 )
{
    for ( int i = 0; ( s1[ i ] = s2[ i ]) != '\0'; i++ )
    ;
}

void copia2( char *s1, const char *s2 )
{
    for ( ; ( *s1 = *s2 ) != '\0'; s1++, s2++ )
        ;
}
