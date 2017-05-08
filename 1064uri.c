#include <stdio.h>
main()
{
    int i=0,pos=0;
    double ara[6];
    double sum=0.00,average;
    for(i=0;i<6;i++){
        scanf("%lf",&ara[i]);
        if(ara[i]>0){
            sum=sum+ara[i];
            pos++;
        }
    }
    average=sum/pos;
    printf("%d valores positivos\n%0.1lf\n",pos,average);
    return 0;
}
