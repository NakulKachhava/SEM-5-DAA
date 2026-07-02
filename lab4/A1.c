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
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

void main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    
    for (int i = n/2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    
    for (int i = n - 1; i > 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
