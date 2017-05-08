#include<stdio.h>
#include<math.h>
main()
{
    int x;
    scanf("%d",&x);
    if(x>=5&&x<=2000){
        int i=2,result;
        for(i=2;i<=x;i=i+2){
            result=pow(i,2);
            printf("%d^2 = %d\n",i,result);
        }
    }
    else {
        return 0;
    }
    return 0;
}
