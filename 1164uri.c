#include <stdio.h>
void isperfect(unsigned long long x)
{
    unsigned long long i,sum=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum=sum+i;
    }
    if(sum==x)
        printf("%llu eh perfeito\n",x);
    else
        printf("%llu nao eh perfeito\n",x);
}
int main()
{
    unsigned long long i,T,x;
    scanf("%llu", &T);
    for(i=0;i<T;i++){
        scanf("%llu", &x);
        isperfect(x);
    }
    return 0;
}


