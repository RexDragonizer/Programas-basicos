#include <iostream>
using std::cout;
using std::endl;

void usarLocal(); //prototipo de funcion
void usarLocalStatic(); //prototipo de funcion
void usarGlobal(); //prototipo de funcion

int x = 1; //Variable global

int main()
{
    cout << "La x global en main es " << x << endl;

    int x = 5; // Variable Local para main

    cout << "la x local en el alcance exterior de main es " << x << endl;

    {// Empieza nuevo alcance
        int x = 7; // oculta la x en el alcance exterior y la x global

        cout << "la x local en el alcance interior de main es " << x << endl;
    }

    cout << "la x local en el alcance exterior de main es " << x << endl;

    usarLocal();// usarLocal tiene la x locale
    usarLocalStatic(); // usarLocalStatic tiene la x local estatica
    usarGlobal(); //usarGlobal usa la x global
    usarLocal(); // usarLocar reinicializa su x local
    usarLocalStatic();// la x local estatica retiene su valor anterior
    usarGlobal();

    cout << "\nla x local en main es " << x << endl;
    return 0;
}

void usarLocal()
{
    int x = 25;

    cout << "\nla x local es " << x << " al entrat a usarLocal" << endl;
    x++;
    cout << "la x local es " << x << " al salir de usarLocal" << endl;
}

// usarLocalStatic inicializa la variable x local estatica solo la primera vez que se llama a la funcion;
//el valor de x se guarfa entre las llamadas a esta funcion

void usarLocalStatic()
{
    static int x = 50;

    cout << "\nla x local estatica es " << x << " al entrar a usarLocalStatic" << endl;
    x++;
    cout << "la x local estatica es " << x << " al salir de usarLocalStatic" << endl;
}

//usarGlobal modica la variable gloval x durante la llamada.
void usarGlobal()
{
    cout << "\nla x global es " << x << " al entrar a usarGlobal" << endl;
    x *= 10;
    cout << "la x global es " << x << " al salir de usarGlobal" << endl;
}
