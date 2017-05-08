#include <stdio.h>
main()
{
    int x,y;
    for(;;){
    scanf("%d %d", &x,&y);
    if(x<=0||y<=0){
        return 0;
    }
    else if(x<y){
        int sum=0;
        for(x;x<=y;x++){
            printf("%d ",x);
            sum=sum+x;
            }
            printf("Sum=%d\n",sum);
        }
    else if(y<x){
        int i,sum=0;
        for(y;y<=x;y++){
            printf("%d ",y);
            sum=sum+y;
            }
            printf("Sum=%d\n",sum);
        }
    }
}
