//Programa que simula un juego de memorizacion de palabras, mostrando un numero determinado de palabras y pidiendo que escribas de la misma manera.
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int numDePalabras;
#define N 50 // Numero de pares de palabras en la matriz

bool checkrep( int n, int num[] )
{
    for( int i=0; i < numDePalabras; i++ )
        if( n == num[ i ] )
            return true;
    return false;
}



int main()
{
    //Iniciar el numero aleatorio con el reloj interno
    srand( time ( NULL ) );
    // Declaracion de las variables
    int n;
    int correctas = 0;
    int incorrectas = 0;
    int num [ numDePalabras ];
    string respuesta, palabras[ N ][ 2 ] = {
      {"Hi", "Hola"},          {"House", "Casa"},          {"Water", "Agua"},         {"Magic", "Magia"},   {"Computadora", "Computer"},
      {"Roof", "Techo"},       {"Chair", "Silla"},         {"Loudspeaker", "Bocina"}, {"Cat", "Gato"},      {"Dog", "Perro"},
      {"Screen", "Pantalla"},  {"Money", "Dinero"},        {"World", "Mundo"},        {"Man", "Hombre"},    {"Woman", "Mujer"},
      {"Palabra", "Word"},     {"Numero", "Number"},       {"Caballo", "Horse"},      {"Pelota", "Ball"},   {"Raton", "Mouse"},
      {"Zanahoria", "Carrot"}, {"Gorra", "Hat"},           {"Barco", "Ship"},         {"Globo", "Ballon"},  {"Lentes", "Sunglases"},
      {"Good Bye", "Adios"},   {"Carro", "Car"},           {"Bus", "Camion"},         {"Zapato", "Shoes"},  {"Paper", "Papel"},
      {"Rock", "Roca"},        {"Dinosaurio", "Dinosaur"}, {"Key", "Llave"},          {"Estrella", "Star"}, {"Sponge", "Esponja"},
      {"Table", "Mesa"},       {"Flor", "Flower"},         {"Candle", "Vela"},        {"Cubeta", "Bucket"}, {"Woman", "Mujer"},
      {"Palabra", "Word"},     {"Numero", "Number"},       {"Caballo", "Horse"},      {"Pelota", "Ball"},   {"Backpack", "Mochila"},
      {"Boots", "Botas"},      {"Dress", "Vestido"},       {"Shirt", "Camisa"},       {"Tie", "Corbata"},   {"Banco", "Bank"},
      };

    cout << "El juego cuenta con " << N << " pares de palabras. Con cuantos pares deseas jugar?:";
    cin >> numDePalabras;
    //Bucle para que el juego funcione correctamente
    while ( numDePalabras <= 0 || numDePalabras > N )
    {
        cout << "\n Numero invalido de pares de palabras. Intenta con otro valor que sea menor a " << N << " : ";
        cin >> numDePalabras;
    }
     // obtener 'numDePalabras' palabras aleatoriamente de nuestra matriz
    for( int i=0; i < numDePalabras; i++ )
    {
        do
            n = rand() % N;
        while( checkrep( n, num ) );
        num[ i ] = n;
        cout << palabras[ n ][ 0 ] << " -> " << palabras[ n ][ 1 ] << endl;
    }
    cout << "\n Pulsa Para continuar." << endl;
    cin.get(); cin.get();

    system("cls"); // Limpia la consola en windows
    //system("clear"); //Limpia la consola en linux
    // preguntar el significado de cada palabra
    for(int i = 0; i < numDePalabras; i++)
    {
        cout << palabras[ num [ i ]][ 0 ] << " = "; cin >> respuesta;
        if( respuesta == palabras[ num[ i ] ][ 1 ] )
        {
            correctas++;
            cout << ">> Bien :)\n\n";
        }
        else
        {
            incorrectas++;
            cout << ">> Mal :(\n\n";
        }
    }
    cout << "Tuviste un " << (float)correctas / (float)numDePalabras * 100 <<
                "% de respuestas correctas.";

    cout << "\n Pulsa Para continuar." << endl;
    cin.get(); cin.get();

    return 0;
}
