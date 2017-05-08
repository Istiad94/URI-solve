#include<stdio.h>
main()
{
    int N[20];
    int i;
    for(i=0;i<20;i++){
        scanf("%d", &N[i]);
    }
    int x=0,j=19;
    for(x=0;j>=0;j--,x++){
        printf("N[%d] = %d\n", x, N[j]);
    }
    return 0;
}
