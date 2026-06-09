#include <stdio.h>
#include <time.h>

int sumUpToN(int n){
   
    if(n==0){
        return 0;
    }
    
    return n + sumUpToN(n-1);
}


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    clock_t start, end;
    start = clock();
    int s = sumUpToN(n);
    end = clock();

    double t = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Sum up to %d: %d",n,s);
    printf("\nTime: %lf",t);

    return 0;
}
