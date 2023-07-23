// Programa que calcula la suma de 10 valores y los opera por medio de arreglos
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
   int V[ 10 ];
   int i, tmay, tmen;
   int sum = 0, n = 0, may = 0, men = 0;
   float vamed;
   cout << "Coloca 10 valores para empezar a trabajar: " << endl;
   for(i = 1; i <= 10; i++)
    {
        cout << "Dame valor " << i << ": ";
        ++n;
        cin >> V[n];
        cout << endl;
        if(V[ n ] > V[( n - 1 ) ]) tmay = V[ n ];
         if( tmay > may ) may = tmay;
         if( V [ n ] < V [ ( n - 1)]) tmen = V[ n ];
         if ( tmen < men ) men = tmen;
        sum = sum + V[ n ];
        if ( ( tmay < may ) && ( tmen > men )) men = V[ n ];
        // if (tmay > 0) may = V[n];
    }
    vamed = sum / 10;
    system( "cls" );
    system( "clear" );
    cout << "Los resultados son:" << endl;
    cout << "La suma de los valores es:      " << sum << endl;
    cout << "El valor medio es:              " << vamed << endl;
    cout << "El valor menor es:              " << men << endl;
    cout << "El valor mayor es:              " << may << endl;
    return 0;
}
