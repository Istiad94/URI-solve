#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
void printer(int x)
{
    if(x==0)
        printf("NULL\n");
    else if(x%2==0){
        printf("EVEN ");
            if(x>0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
            }
            else if(x%2!=0){
                printf("ODD ");
            if(x>0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
            }
}
main()
{
    int T,x,i;
    scanf("%d",&T);
    if(T>=1&&T<=10000){
        for(i=0;i<T;i++){
            scanf("%d",&x);
            if(x>=-10000000&&x<=10000000){
                printer(x);
            }
        }
        return 0;
    }
    else
        return 0;
}
