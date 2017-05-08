#include<stdio.h>
int main()
{
    int i,t;
    for(;;){
        scanf("%d", &t);
        if(t==0)
            break;
        else {
            for(i=1;i<t;i++)
                printf("%d ",i);
            printf("%d\n",t);
        }
    }
    return 0;
}
