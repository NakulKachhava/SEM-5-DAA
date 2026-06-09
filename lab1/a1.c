#include <stdio.h>
#include <time.h>

int factorial(int n){

    if(n==0){
        return 1;
    }
    
    return n * factorial(n-1);
}


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    clock_t start, end;
    start = clock();
    int f = factorial(n);
    end = clock();

    double t = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Factorial: %d",f);
    printf("\nTime: %lf",t);

    return 0;
}
