#include <stdio.h>
#include <time.h>

int minDifference(int* a, int n){
    int minDiff = a[1] - a[0];
    for (int i = 1; i < n - 1; i++)
    {
        int initDiff = a[i+1] - a[i];
        if(minDiff > initDiff){
            minDiff = initDiff;
        }
    }
    
    return minDiff;
}

void main(){
    int n;
    clock_t start, end;
    
    printf("Enter Size of the Array: ");
    scanf("%d",&n);

    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element: ");
        scanf("%d",&a[i]);
    }
    
    start = clock();
    int minDiff = minDifference(a, n);
    end = clock();

    double t = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("Minimum Difference Between Any Pair: %d\n",minDiff);
    printf("Time: %d", t);
}