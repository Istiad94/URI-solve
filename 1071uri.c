#include<stdio.h>
main()
{
    int x,y;
    scanf("%d %d", &x,&y);
    if(x<y){
        int z=x+1,sum=0;
        for(z;z<y;z++){
            if(z%2!=0){
                sum=sum+z;
            }
        }
        printf("%d\n",sum);
    }
    else if(y<x){
        int z=y+1,sum=0;
        for(z;z<x;z++){
            if(z%2!=0){
                sum=sum+z;
            }
        }
        printf("%d\n",sum);
    }
    else if(x==y){
        printf("0\n");
    }
    return 0;
}
