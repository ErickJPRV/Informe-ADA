#include <iostream>
using namespace std;
void cabeza(int arr[], int n, int i) 
{ 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
    int l1; 
  
    if (l < n && arr[l] > arr[i]) 
        l1 = l; 
    else
        l1 = i; 
  
    if (r < n && arr[r] > arr[l1]) 
        l1 = r; 
  
    if (l1 != i) { 
        swap(arr[i], arr[l1]); 
        cabeza(arr, n, l1); 
    } 
} 
  
void contruccion(int arr[]) 
{ 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    for (int i = n / 2 - 1; i >= 0; i--) 
        cabeza(arr, n, i); 
  
    for (int i = n - 1; i > 0; i--) { 
        swap(arr[0], arr[i]); 
        cabeza(arr, i, 0); 
    } 
}
