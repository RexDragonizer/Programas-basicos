#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.141592

float Coseno( float );
float Seno( float );

int main()
{
    float ang;
    cout << "Dame un angulo: ";
    cin >> ang;
    cout << "El seno del angulo es: " << Seno( ang ) << endl;
    cout << "El coseno del angulo es: " << Coseno( ang ) << endl;
    return 0;
}

float Coseno( float ang )
{
  float alfa;
  alfa = cos( ang * PI / 180 );
  return alfa;
}

float Seno( float ang )
{
  float beta;
  beta = sin(ang * PI / 180);
  return beta;
}
