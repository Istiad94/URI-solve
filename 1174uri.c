#include<stdio.h>
main()
{
    double A[100];
    int i;
    for(i=0;i<100;i++){
        scanf("%lf", &A[i]);
        if(A[i]<=10){
            printf("A[%d] = %0.1lf\n", i, A[i]);
        }
    }
    return 0;
}
