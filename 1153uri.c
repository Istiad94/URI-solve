#include <stdio.h>
main()
{
    int i,j=1,N;
    scanf("%d", &N);
    if(N>0&&N<13){
        for(i=0;i<N;i++){
            j=(N-i)*j;
        }
        printf("%d\n",j);
        return 0;
    }
    else
        return 0;
}
