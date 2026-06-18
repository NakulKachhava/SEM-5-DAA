#include <stdio.h>
#include <time.h>

void generateSubArrays(int a[], int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",a[i]);
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    clock_t start, end;

    printf("Enter a size of the array: ");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }

    start = clock();
    // generateSubArrays(a,n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d",a[i]);
        }
        printf("\n");
    }
    end = clock();

    double t = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nTime: %lf",t);
    return 0;
}
