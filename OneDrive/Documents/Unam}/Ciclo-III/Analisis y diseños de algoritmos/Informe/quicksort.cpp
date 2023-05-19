#include <iostream>
using namespace std;
int particion(int arreglo[], int izquierda, int derecha)
{
    int pivote = arreglo[izquierda];
    while (true)
    {
        while (arreglo[izquierda] < pivote)
            izquierda++;
        while (arreglo[derecha] > pivote)
            derecha--;
        if (izquierda >= derecha)
            return derecha;
        else
        {
            int temp = arreglo[izquierda];
            arreglo[izquierda] = arreglo[derecha];
            arreglo[derecha] = temp;
            izquierda++;
            derecha--;
        }
    }
}

void quicksort(int arreglo[], int izquierda, int derecha)
{
    if (izquierda < derecha)
    {
        int indiceParticion = particion(arreglo, izquierda, derecha);
        quicksort(arreglo, izquierda, indiceParticion);
        quicksort(arreglo, indiceParticion + 1, derecha);
}
}
