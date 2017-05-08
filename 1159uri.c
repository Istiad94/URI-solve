#include <stdio.h>
#include <math.h>
void even(int x)
{
    int sum=0,i,z=(x+1);
    if(x%2==0){
        for(i=0;i<5;x=x+2,i++){
            sum=sum+x;
        }
        printf("%d\n",sum);
    }
    else{
        for(i=0;i<5;z+=2,i++){
            sum=sum+z;
        }
        printf("%d\n",sum);
    }
}
main()
{
    int x=11;
    for(;;){
        scanf("%d",&x);
        if(x==0)
            break;
        else
            even(x);
    }
    return 0;
}
