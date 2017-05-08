#include <stdio.h>
main()
{
    double i,j,sum=0,n;
    for(i=1,j=1;i<=39;i+=2){
        n=(i/j);
        sum=sum+n;
        j=j*2;
    }
    printf("%0.2lf\n", sum);
    return 0;
}
