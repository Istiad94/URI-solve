#include <stdio.h>
main()
{
    int sum=0,x,y;
    scanf("%d %d", &x,&y);
    if(x<y){
        for(x;x<=y;x++){
            if(x%13!=0){
                sum=sum+x;
            }
        }
        printf("%d\n",sum);
    }
    else if(y<x){
        for(y;y<=x;y++){
            if(y%13!=0){
                sum=sum+y;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
