#include <stdio.h>
#include <time.h>

int countDigit(int n){

    if(n==0){
        return 0;
    }

    return 1 + countDigit(n/10);
}


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    clock_t start, end;
    start = clock();
    int c = countDigit(n);
    end = clock();

    double t = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Count of Digit: %d",c);
    printf("\nTime: %lf",t);

    return 0;
}
