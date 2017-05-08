#include <stdio.h>
#include <math.h>
int isprime(int n)
{
     if(n < 2)
         return 0;
     if(n==2)
        return 1;
     if(n%2==0)
        return 0;
     int root=sqrt(n),i;
     for(i=3;i<=root;i+=2){
        if(n%i==0)
            return 0;
     }
     return 1;
}
int main()
{
     int T,x,i;
     scanf("%d", &T);
     if(T>0&&T<=100){
     for(i=0;i<T;i++){
            scanf("%d", &x);
        if(x>0&&x<=10000000){
            if(isprime(x)==1)
                printf("%d eh primo\n",x);
            else
                printf("%d nao eh primo\n",x);
        }
        else
            break;
     }
     return 0;
     }
     else
        return 0;
}

