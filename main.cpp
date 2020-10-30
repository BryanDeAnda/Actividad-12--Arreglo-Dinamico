#include <iostream>
#include "arreglodinamico.h"

using namespace std;

int main()
{
    Arreglodinamico arreglo;
    arreglo.insertar_final("Nombre:");
    arreglo.insertar_final("Bryan");
    arreglo.insertar_final("De");
    arreglo.insertar_final("Anda");
    arreglo.insertar_final("Reyes");
    arreglo.insertar_final("tiene");
    arreglo.insertar_final("mucha");
    arreglo.insertar_final("hambre");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << "  ";
    }
    cout << endl;

    arreglo.insertar_inicio("diecinueve");
    arreglo.insertar_inicio("Edad:");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << "  ";
    }

    return 0;
}