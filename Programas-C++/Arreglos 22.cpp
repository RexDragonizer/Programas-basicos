//uso de strcat y strncat
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strcat;
using std::strncat;

int main()
{
    char s1[ 20 ] = "Feliz ";
    char s2[] = "Anio Nuevo ";
    char s3[ 40 ] = "";

    cout << "s1 = " << s1 << "\ns2 = " << s2;

    strcat( s1, s2 );

    cout << "\n\nDespues de strcat(s1, s2): \ns1 = " << s1 << "\ns2 = " << s2;

    strncat( s3, s1, 6 );

    cout << "\n\nDespues de strncat(s3, s1, 6): \ns1 = " << s1 << "\ns3 = " << s3;

    strcat( s3, s1 );
    cout << "\n\nDespues de strcat(s3, s1): \ns1 = " << s1 << "\ns3 = " << s3 << endl;

    return 0;
}
