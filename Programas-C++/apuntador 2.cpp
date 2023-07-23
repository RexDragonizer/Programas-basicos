#include <iostream>
using std::cout;
using std::endl;

int cuboPorValor( int );

int main()
{
    int numero = 5;

    cout << "El valor original de numero es " << numero;

    numero = cuboPorValor( numero );

    cout << "\nEl nuevo valor de numero es " << numero << endl;
    return 0;
}

int cuboPorValor( int n )
{
    return n * n * n;
}
