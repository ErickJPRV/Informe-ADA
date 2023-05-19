#include <iostream>
using namespace std;
#include <stdio.h>
void swap(int *a, int *b) 
    { 
        int temp = *a; 
        *a = *b; 
        *b = temp; 
    }
void BubbleSort(int lista[],int len) 
    { 
        int i, j; 
        for (i = 0; i < len-1; i++)       
            for (j = 0; j < len-i-1; j++)  
                if (lista[j] > lista[j+1]) 
                    swap(&lista[j], &lista[j+1]);
    }
