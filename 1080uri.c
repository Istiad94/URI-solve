#include <stdio.h>
main()
{
    int ara[100],T,i,j,pos;
    for(i=0;i<100;i++){
        scanf("%d",&ara[i]);
    }
    T=ara[0];
    for(j=0;j<100;j++){
        if(ara[j]>T){
            pos=j+1;
            T=ara[j];
        }
    }
    if(T==ara[0])
        pos=1;
    printf("%d\n%d\n",T,pos);
    return 0;
}
