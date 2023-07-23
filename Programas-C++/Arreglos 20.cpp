#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void funcion0( int );
void funcion1( int );
void funcion2( int );

int main()
{
    void (*f[3])( int ) = { funcion0, funcion1, funcion2 };

    int opcion;

    cout << "Escriba un numero entre 0 y 2, 3 para terminar ";
    cin >> opcion;

    while( ( opcion >= 0 ) && ( opcion < 3 ) )
    {
        (*f[ opcion ])( opcion );

        cout << "Escriba un numero entre 0 y 2, 3 para terminar : ";
        cin >> opcion;
    }

    cout << "Se completo la ejecucion del programa." << endl;
    return 0;
}

void funcion0( int a )
{
    cout << "Usted escribio " << a << " por lo que se llamo a la funcion0\n\n";
}

void funcion1( int b )
{
    cout << "Usted escribio " << b << " por lo que se llamo a la funcion1\n\n";
}

void funcion2( int c )
{
    cout << "Usted escribio " << c << " por lo que se llamo a la funcion2\n\n";
}
