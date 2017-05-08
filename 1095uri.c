#include <stdio.h>
main()
{
    int i=1,j=60;
    for(j,i;j>=0;j=j-5,i=i+3){
        printf("I=%d J=%d\n",i,j);
    }
    return 0;
}
