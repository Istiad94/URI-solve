#include<stdio.h>
main()
{
    int x;
    scanf("%d",&x);
    if(x>=1&&x<=1000){
        int i=1;
        for(i=1;i<=x;i+=2){
            printf("%d\n",i);
        }
    }
    else {
        return 0;
    }
    return 0;
}
