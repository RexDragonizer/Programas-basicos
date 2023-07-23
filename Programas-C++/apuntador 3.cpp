#include <iostream>
using std::cout;
using std::endl;

void cuboPorReferencia( int *);

int main()
{
    int numero = 5;

    cout << "El valor original del numero es " << numero;

    cuboPorReferencia( &numero );

    cout << "\n el nuevo valor del numero es " << numero << endl;
    return 0;
}

void cuboPorReferencia( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}
