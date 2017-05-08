#include<stdio.h>
int main()
{
    int ara[1000];
    int i, j,n;
    scanf("%d", &n);
    for(i=0,j=0;i<1000;i++,j++){

            if(j == n)
            {
                j = 0;
            }
        ara[i]=j;
    }
    for(i = 0; i < 1000; i++)
      {
          printf("N[%d] = %d\n",i , ara[i]);
      }
    return 0;
}
