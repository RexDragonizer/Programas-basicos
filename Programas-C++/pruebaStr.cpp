//Programa de concatenacion basica
#include <iostream>

using namespace std;

int main()
{
    string nombre;
    string apellido1;
    string apellido2;
    string nombreCompleto;
    cout << "Cual es tu nombre? ";
    cin >> nombre;
    cout << "Cual es tu primer apellido? ";
    cin >> apellido1;
    cout << "Cual es tu segundo apellido? ";
    cin >> apellido2;
    cout << "Tu nombre completo es:\n" << nombre << " " << apellido1 << " " << apellido2 << endl;
    cout << "Tu nombre completo es:\n" << nombre + " " + apellido1 + " " + apellido2 << endl;
    nombreCompleto = nombre.append( " " + apellido1 + " " + apellido2 );
    cout << "Tu nombre completo es:\n" << nombreCompleto;
    return 0;
}
