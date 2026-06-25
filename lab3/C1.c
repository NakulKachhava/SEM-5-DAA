#include <stdio.h>
#include <time.h>

int meetingOverlap(int** a, int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j][0] > a[j+1][0])
            {
                int temp1 = a[j][0];
                int temp2 = a[j][1];
                a[j][0] = a[j+1][0];
                a[j][1] = a[j+1][1];
                a[j+1][0] = temp1;
                a[j+1][1] = temp2;
            }
        }
    }
    
    
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i][1] > a[i+1][0]){
            return 0;
        }
    }
    return 1;
}

void main(){
    int n;
    clock_t start, end;

    printf("Enter Size of the Array: ");
    scanf("%d",&n);

    int a[n][2];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter Starting Time and Ending Time: ");
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    
    start = clock();
    if(meetingOverlap(a, n)){
        printf("A person can attend all the meetings.");
    }
    else{
        printf("A person can not attend all the meetings.");
    }
    end = clock();

    double t = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Time: %d", t);
}