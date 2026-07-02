#include <stdio.h>

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int rigth = 2*i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (rigth < n && arr[rigth] > arr[largest])
    {
        largest = rigth;
    }
    
    if (largest != i)
    {
        int temp = i;
        largest = i;
        i = largest;
    }
}

void main(){
    int n;
    int arr[5] = {1,2,3,4,5};
    
    for (int i = n/2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    
    for (int i = n/2 - 1; i >= 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}