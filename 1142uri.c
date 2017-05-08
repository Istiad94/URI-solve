#include<stdio.h>
main()
{
    int t,i=1,count=0;
    scanf("%d",&t);
    for(i=1;count<t;i=i+4){
        printf("%d %d %d PUM\n",i,i+1,i+2);
        count++;
    }
    return 0;
}
