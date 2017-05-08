#include <stdio.h>
main()
{
    int N;
    scanf("%d" , &N);
    if(N>0&&N<=1000){
    int ara[N],T,i,j,pos;
    for(i=0;i<N;i++){
        scanf("%d",&ara[i]);
    }
    T=ara[0];
    for(j=0;j<N;j++){
        if(ara[j]<T){
            pos=j;
            T=ara[j];
        }
    }
    if(T==ara[0])
        pos=0;
    printf("Menor valor: %d\nPosicao: %d\n",T,pos);
    return 0;
    }
    else
        return 0;
}
