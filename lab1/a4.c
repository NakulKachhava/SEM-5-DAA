#include <stdio.h>
#include <time.h>

int power(int b,int e){
   
    if(e==0){
        return 1;
    }
    
    return b * power(b,e-1);
}


int main(int argc, char const *argv[])
{
    int b,e;
    printf("Enter base: ");
    scanf("%d",&b);
    printf("Enter exponent: ");
    scanf("%d",&e);
    clock_t start, end;
    start = clock();
    int p = power(b,e);
    end = clock();

    double t = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Power : %d",p);
    printf("\nTime: %lf",t);

    return 0;
}
