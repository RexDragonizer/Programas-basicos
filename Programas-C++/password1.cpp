//Programa hara una password aleatorio

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int longitud = 6;
    int numero_aleatorio;
    srand( time( NULL ));
    string caracteres;
    string password_aleatorio = "";
    string caracter_seleccionado = "";
    caracteres = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789!@#$%^&*()";
    cout << "Determine una longitud para la contrasena: ";
    cin >> longitud;

    if ( longitud >= 6 )
    {
        int contador = 0;
        for ( contador; contador <= longitud; contador++ )
        {
            numero_aleatorio = rand()%(62);
            cout << caracteres[numero_aleatorio];
            caracter_seleccionado = caracteres[numero_aleatorio];
            password_aleatorio = password_aleatorio + caracter_seleccionado;
        }
        cout << "\n" << password_aleatorio;
    }

    else if ( longitud < 6)
        cout << "\nLongitud invalida establezca una igual o mayor a 6.";



     /*string cadena = "ABCDEF";
     cout << "\n" << cadena[0] << cadena.at(0) << cadena.front() << *cadena.begin() << *std::begin(cadena);
     string palabra;
     palabra = cadena[2] + cadena[0] + cadena[2] + cadena[0];
     cout << "\n" << palabra;*/

}
