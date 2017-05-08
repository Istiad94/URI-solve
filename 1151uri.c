#include<stdio.h>
#include<stdlib.h>
int main()
{
    int F=0, S=1, next , n, i, *fibo;
    scanf("%d", &n);
    fibo=(int*)malloc(4*n);
    for(i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next=F+S;
            F=S;
            S=next;
        }
        fibo[i]=next;
    }
    for(i=0;i<n;i++){
        if(i==(n-1))
            printf("%d\n", fibo[i]);
        else
        printf("%d ", fibo[i]);
    }
    return 0;
}
