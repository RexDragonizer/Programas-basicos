#include <string>
using std::string;

class LibroCalificaciones
{
public:
    const static int estudiantes = 10;
    const static int pruebas = 3;

    LibroCalificaciones( string, const int [][ pruebas ] );

    void establecerNombreCurso( string );
    string obtenerNombreCurso();
    void mostrarMensaje();
    void procesarCalificaciones();
    int obtenerMinimo();
    int obtenerMaximo();
    double obtenerPromedio( const int [], const int );
    void imprimirGraficoBarras();
    void imprimirCalificaciones();
private:
    string nombreCurso;
    int calificaciones[ estudiantes ][ pruebas ];
};
