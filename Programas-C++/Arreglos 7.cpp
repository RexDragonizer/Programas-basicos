#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int tamanioRespuesta = 40;
    const int tamanioFrecuencia = 11;

    const int respuestas[ tamanioRespuesta ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    int frecuencia[ tamanioFrecuencia ] = {};

    for( int respuesta = 0; respuesta < tamanioRespuesta; respuesta++ )
        frecuencia[ respuestas[ respuesta ] ]++;

    cout << "Calificacion" << setw( 17 ) << "Frecuencia" << endl;

    for ( int calificacion = 1; calificacion < tamanioFrecuencia; calificacion++ )
        cout << setw( 12 ) << calificacion << setw( 17 ) << frecuencia[ calificacion ] << endl;

    return 0;
}
