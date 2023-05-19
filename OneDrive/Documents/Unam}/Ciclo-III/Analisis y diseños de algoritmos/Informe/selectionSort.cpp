#include <iostream>
using namespace std;
void Selection_Sort(int array[], int size) 
    { 
        int i, j, smallest; 
        for (i = 0; i < size-1; i++) 
        { 
            smallest = i; 
            for (j = i+1; j < size; j++) 
            {
                if (array[j] < array[smallest]) 
                    smallest = j; 
            }
            int temp = array[i];
            array[i] = array[smallest];
            array[smallest] = temp;
        } 
    }
