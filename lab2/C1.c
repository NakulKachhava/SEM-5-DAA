#include <stdio.h>
#include <time.h>

void sumOfNumbers(int n){
    int start = 1, end = 1, sum = 1;

    while (start <= n/2)
    {
        if (sum == n){
            break;
        }

        if (sum < n){
            end++;
            sum += end;
        }

        if(sum > n){
            sum -= start;
            start++;
        }
    }

    for (int i = start; i <= end; i++)
    {
        printf("%d ",i);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    clock_t start, end;

    printf("Enter a number: ");
    scanf("%d",&n);

    start = clock();
    sumOfNumbers(n);
    end = clock();

    double t = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nTime: %lf",t);
    return 0;
}
