#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include "LibroCalificaciones.h"

LibroCalificaciones::LibroCalificaciones( string nombre, const int arregloCalificaciones[ ][ pruebas ] )
{
    establecerNombreCurso( nombre );

    for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )
        for ( int prueba = 0; prueba < pruebas; prueba++ )
        calificaciones[ estudiante ][ prueba ] = arregloCalificaciones[ estudiante ][ prueba ];
}

void LibroCalificaciones::establecerNombreCurso( string nombre )
{
    nombreCurso = nombre;
}

string LibroCalificaciones::obtenerNombreCurso()
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje()
{
    cout << "Bievenido al libro de calificaciones para \n" << obtenerNombreCurso() << "!" << endl;
}

void LibroCalificaciones::procesarCalificaciones()
{
    imprimirCalificaciones();

    //cout << "\nEl promedio de la clase es " << setprecision( 2 ) << fixed << obtenerPromedio() << endl;

    cout << "La calificacion mas baja es " << obtenerMinimo() << "\nLa calificacion mas alta es " << obtenerMaximo() << endl;

    imprimirGraficoBarras();
}

int LibroCalificaciones::obtenerMinimo()
{
    int calificacionInf = 100;

    for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )
    {

        for ( int prueba = 0; prueba < pruebas; prueba++ )
        {

            if ( calificaciones[ estudiante ][ prueba ] < calificacionInf )
                calificacionInf = calificaciones[ estudiante ][ prueba ];
        }
    }
    return calificacionInf;
}

int LibroCalificaciones::obtenerMaximo()
{
    int calificacionSup = 0;

    for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )
    {

        for ( int prueba = 0; prueba < pruebas; prueba++ )
        {

            if ( calificaciones [ estudiante ][ prueba ] > calificacionSup )
                calificacionSup = calificaciones[ estudiante ][ prueba ];
        }
    }
    return calificacionSup;
}

double LibroCalificaciones::obtenerPromedio( const int conjuntoDeCalificaciones[], const int calificaciones )
{
     int total = 0;

     for ( int calificacion = 0; calificacion < calificaciones; calificacion++ )
        total += conjuntoDeCalificaciones[ calificacion ];

     return static_cast < double > ( total ) / calificaciones;
}

void LibroCalificaciones::imprimirGraficoBarras()
{
    cout << "\nDistribucion de calificaciones: " << endl;

    const int tamanioFrecuencia = 11;
    int frequency[ tamanioFrecuencia ] = {};

    for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )

        for ( int prueba = 0; prueba < pruebas; prueba++ )
            ++frequency[ calificaciones[ estudiante ][ prueba ] / 10];

    for ( int cuenta = 0; cuenta < tamanioFrecuencia; cuenta++ )
    {
        if ( cuenta == 0)
            cout << "   0-9: ";
        else if ( cuenta == 10 )
            cout << "   100: ";
        else
            cout << cuenta * 10 << "-" << ( cuenta * 10 ) + 9 << " : ";

        for( int estrellas = 0; estrellas < frequency[ cuenta ]; estrellas++ )
            cout << '*';

        cout << endl;
    }

}

void LibroCalificaciones::imprimirCalificaciones()
{
    cout << "\nLas calificaciones son:\n\n";
    cout << "             ";

    for ( int prueba = 0; prueba < pruebas; prueba++ )
        cout << "Prueba " << prueba + 1 << "  ";

    cout << "Promedio" << endl;

    for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )
    {
        cout << "Estudiante " << setw( 2 ) << estudiante + 1;

        for ( int prueba = 0; prueba < pruebas; prueba++ )
            cout << setw( 8 ) << calificaciones[ estudiante ][ prueba ];

        double promedio = obtenerPromedio( calificaciones[ estudiante ], pruebas );
        cout << setw( 9 ) << setprecision( 2 ) << fixed << promedio << endl;
    }
}
