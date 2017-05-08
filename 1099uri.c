#include<stdio.h>
void undefined(int x, int y)
{
    int i,sum=0;
    if (x<y){
            i=x+1;
        for(i;i<y;i++){
            if(i%2!=0){
                sum=i+sum;
            }
        }
        printf("%d\n",sum);
    }
    else if (y<x){
        i=y+1;
        for(i;i<x;i++){
            if(i%2!=0){
                sum=i+sum;
            }
        }
        printf("%d\n",sum);
    }
    else if(x==y){
        printf("0\n");
    }
}
main()
{
    int t,x,y,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x, &y);
        undefined(x,y);
    }
    return 0;
}
