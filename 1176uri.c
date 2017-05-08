#include<stdio.h>
int main()
{
    long long int T, pos, fibo[61], i,F=0, S=1, next;

    for(i=0;i<61;i++){
        if(i<=1)
            next=i;
        else{
            next=F+S;
            F=S;
            S=next;
        }
        fibo[i]=next;
    }

    scanf("%lld", &T);

    for(i=0;i<T;i++){
        scanf("%lld", &pos);
        printf("Fib(%lld) = %lld\n", pos, fibo[pos]);
    }

    return 0;
}
