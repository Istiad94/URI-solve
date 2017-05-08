#include<stdio.h>
#include<math.h>
main()
{
    double sum=0,i;
    for(i=1;i<=100;i++){
        sum=(1/i)+sum;
    }
    printf("%.2lf\n",sum);
    return 0;
}
