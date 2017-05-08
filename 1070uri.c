#include <stdio.h>
main()
{
    int x,count=0;
    scanf("%d",&x);
    for(x;count<6;x++){
        if(x%2!=0){
            printf("%d\n",x);
            count++;
        }
    }
    return 0;
}
