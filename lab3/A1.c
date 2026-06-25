#include <stdio.h>
#include <time.h>

void bubble_Sort(){

}

void main(){
    clock_t start, end;
    FILE *fp1, *fp2, *fp3;

    fp1 = fopen("best100000.txt","w");
    fp2 = fopen("avg100000.txt","w");
    fp3 = fopen("worst100000.txt","w");

    for (int i = 1; i <= 100000; i++)
    {
        fprintf(fp1,"%d\n",i);
        fprintf(fp2,"%d\n",rand());
        fprintf(fp3,"%d\n",100000-i+1);
    }
    
    start = clock();
    bubble_Sort();
    end = clock();

    double t = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Time: %d", t);
}