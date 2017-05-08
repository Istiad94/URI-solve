#include <stdio.h>
#include <stdlib.h>
main ()
{
    int a,b,ab,c;
    scanf("%d%d%d",&a,&b,&c);
    ab=(a+b+abs(a-b))/2;
    if(ab>c)
        printf("%d eh o maior\n", ab);
    else
        printf("%d eh o maior\n", c);
    return 0 ;
}
