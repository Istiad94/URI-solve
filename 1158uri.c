#include <stdio.h>
int fun(int x, int y)
{
    int i,sum=0;
    for(i=0,x=x;i<y;i++,x=x+2){
        sum=sum+x;
    }
    return sum;
}
main()
{
    int T,X,Y,i;
    scanf("%d", &T);
    for(i=0;i<T;i++){
        scanf("%d %d", &X,&Y);
        if(X%2==0){
            X=X+1;
            printf("%d\n", fun(X,Y));
        }
        else
            printf("%d\n", fun(X,Y));
    }
    return 0;
}
