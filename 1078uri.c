#include <stdio.h>
void multi(int x,int y)
{
    printf("%d x %d = %d\n",x,y,(x*y));
}
main()
{
    int T,j=1;
    scanf("%d",&T);
    if(T>=1&&T<=1000){
        for(j=1;j<=10;j++){
            multi(j,T);
        }
        return 0;
    }
    else
        return 0;
}
