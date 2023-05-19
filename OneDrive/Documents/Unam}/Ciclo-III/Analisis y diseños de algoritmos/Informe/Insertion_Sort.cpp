#include <iostream>
using namespace std;
void ordenamiento_insertion_short(int lista[], int n){
        int j, key, i;
        for (j = 2; j < n; j++){
            key = lista[j];
            i = j - 1;
            while (i >= 0 && lista[i] > key){
                lista[i + 1] = lista[i];
                i = i - 1;
            }
            lista[i + 1] = key;
        }
    }
