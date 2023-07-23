#include <iostream>
using std::cout;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include "MazoDeCartas.h"

MazoDeCartas::MazoDeCartas()
{
    for ( int fila = 0; fila <= 3; fila++ )
    {
        for ( int columna = 0; columna <= 12; columna++ )
        {
            mazo[ fila ][ columna ] = 0 ;
        }
    }

    srand( time ( 0 ) );
}

void MazoDeCartas::barajar()
{
    int fila;
    int columna;

    for ( int carta = 1; carta <= 52; carta++ )
    {
        do
        {
            fila = rand() % 4;
            columna = rand() % 13;
        } while ( mazo[ fila ][ columna ] != 0 );

        mazo[ fila ][ columna ] = carta;
    }
}

void MazoDeCartas::repartir()
{

    static const char *palo[ 4 ] =
    { "Corazones", "Diamantes", "Bastos", "Espadas" };

    static const char *cara[ 13 ] =
    { "As", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez", "Sota", "Reina", "Rey" };

    for ( int carta = 1; carta <= 52; carta++ )
    {
        for ( int fila = 0; fila <= 3; fila++ )
        {
            for ( int columna = 0; columna <= 12; columna++ )
            {
                if ( mazo[ fila ][ columna ] == carta )
                {
                    cout << setw( 8 ) << right << cara[ columna ]
                    << "de" << setw( 13 ) << left << palo[ fila ]
                    << ( carta % 2 == 0 ? '\n' : '\t' );
                }
            }
        }
    }
}

