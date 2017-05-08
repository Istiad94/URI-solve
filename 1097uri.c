#include<stdio.h>
int main()
{
    int b,a=7,i,j;
    for(i=1;i<=9;i+=2)
    {
            for(b=0,j=a;b<3;j--,b++){
            printf("I=%d J=%d\n",i,j);
            }
            a+=2;
    }
    return 0;
}
