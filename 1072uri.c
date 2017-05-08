#include <stdio.h>
main()
{
    int t,i,range=0,s;
    scanf("%d",&t);
    if(t>=1&&t<=10000){
        for(i=0;i<t;i++){
            scanf("%d",&s);
            if(s>=-10000000&&s<=10000000){
                if(s>=10&&s<=20){
                    range++;
                }
            }
        }
        printf("%d in\n%d out\n",range,(t-range));
        return 0;
    }
    else{
    return 0;
    }
}
