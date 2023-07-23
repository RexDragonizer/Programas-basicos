//Uso de strtok para dividir cadenas en tokens
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strtok;

int main()
{
    char enunciado[] = "Este es un enunciado con 7 tokens:";
    char *tokenPtr;

    cout << "La cadena a dividir en tokens es:\n" << enunciado << "\n\nLos tokens son:\n\n";

    //empieza la division de enunciado en tokens
    tokenPtr = strtok( enunciado, " " );

    //continua dividiendo enunciado en tokens gasta qye tokenPtr se vuelve NULL
    while( tokenPtr != NULL )
    {
        cout << tokenPtr << '\n';
        tokenPtr = strtok( NULL, " " );//Obtiene el siguiente token
    }

    cout << "\nDespues de strtok, enunciado = " << enunciado << endl;
    return 0;
}
