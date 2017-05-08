#include <stdio.h>
main()
{
    int ara[5],i,even=0;
    for(i=0;i<5;++i){
        scanf("%d",&ara[i]);
        if(ara[i]%2==0){
            even++;
        }
    }
    printf("%d valores pares\n",even);
    return 0;
}
