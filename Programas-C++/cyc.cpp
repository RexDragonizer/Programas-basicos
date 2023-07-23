#include <iostream>
using namespace std;

int PeCuadrado();
int PrJubilado();
int Millas_KM();
int Multiplica();

int main()
{
    int NP;
    cout << "          Lista de Programas       " << endl;
    cout << "1-Programa del Cadrado           " << "     2-Programa de Jubilacion" << endl;
    cout << "3-Programa de conversion Mi-km   " << "     4-Programa de multiplicacion" << endl;
    cout << "0-Salir del Programa             " << endl;
    cout << "Que programa quieres: ";
    cin >> NP;
    cout << endl;
    switch(NP)
    {
        case 0: break;
        case 1: PeCuadrado(); break;
        case 2: PrJubilado(); break;
        case 3: Millas_KM(); break;
        case 4: Multiplica(); break;
        default: cout << "Elija Una opcion entre disponible";
    }
    return 0;
}

int PeCuadrado()
{
    int n, a, p;
    cout << "Dame La longitud del cuadrado: ";
    cin >> n;
    cout << endl;
    a = n * n;
    p = n * 4;
    cout << "Los resultados son:         " << endl;
    cout << "Area: " << a << " y el perimetro: " << p << "." << endl;
    return 0;

}

int PrJubilado()
{
    const int jubil = 65;
    int edad, rest;
    cout << "Dame tu edad: ";
    cin >> edad;
     rest = jubil - edad;
     cout << endl;
     cout << "En " << rest << " anyos te jubilaras." << endl;
     return 0;
}

int Millas_KM()
{
    float ml, km;
    cout << "Dame una cantidad de millas: ";
    cin >> ml;
    cout << endl;
    km = ml * 1.609;
    cout << "Son " << km << " kilometros." << endl;
    return 0;
}

int Multiplica()
{
    int v1, v2, resu;
    cout << "Dame dos numero enteros:" << endl;
    cout << "Numero 1: ";
    cin >> v1;
    cout << "Numero 2: ";
    cin >> v2;
    resu = v1 * v2;
    cout << "El resultado es: " << resu << endl;
    return 0;
}
