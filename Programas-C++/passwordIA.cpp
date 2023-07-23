//Progtama para generar un password aleatorio

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// funcion para generar una contraseña aleatoria pide como parametros una longitud

string generarContrasena( int longitud ) {
string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; /*!@#$%^&*()*/ // Descartados los caracteres especiales
string contrasena;
srand( time ( 0 ) );
// Bucle for para la longitud de la contraseña y para seleccionar los caracteres
for ( int i = 0; i < longitud; i++ ) {
int indice = rand() % caracteres.length();
contrasena += caracteres[ indice ];
}

return contrasena;

}

int main() {
    // Declaracion de la longitud
    int longitud;

    cout << "Ingresa la longitud deseada para la contrasena: ";
    cin >> longitud;

    string contrasenaAleatoria = generarContrasena(longitud);

    cout << "Contrasena generada: " << contrasenaAleatoria << endl;

    return 0;
}
