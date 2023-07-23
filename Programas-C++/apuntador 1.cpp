#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    cout << "La direccion de a es " << &a << "\nEl valor de aPtr es " << aPtr;
    cout << "\n\nEl valor de a es " << a << "\nEl valor de *aPtr es " << *aPtr;
    cout << "\n\nDemostracion de que * y & son inversos "
    << "uno del otro\n&*aPtr = " << &*aPtr << "\n*&aPtr = " << *&aPtr << endl;

    return 0;
}
