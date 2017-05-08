#include <stdio.h>
main()
{
    int N;
    scanf("%d", &N);
    if(N<10000){
        int i=1;
        for(i;i<=10000;i++){
            if(i%N==2){
                printf("%d\n",i);
            }
        }
    }
    else {
        return 0;
    }
    return 0;
}
