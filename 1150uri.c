#include<stdio.h>
main()
{
    int sum=0,count=0,i,x,z;
    scanf("%d", &x);
    error:
        scanf("%d", &z);
    if(z<=x)
        goto error;
    for(x;sum<=z;x++){
        sum=sum+x;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
