#include<stdio.h>
main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d", &a, &b, &c);
    x=a,y=b,z=c;
    if(x<y&&x<z){
        if(y<z){
            printf("%d\n%d\n%d\n\n",x,y,z);
            printf("%d\n%d\n%d\n",a,b,c);
            }
        else if(z<y){
            printf("%d\n%d\n%d\n\n",x,z,y);
            printf("%d\n%d\n%d\n",a,b,c);
            }
    }
    else if(y<x&&y<z){
        if(x<z){
            printf("%d\n%d\n%d\n\n",y,x,z);
            printf("%d\n%d\n%d\n",a,b,c);
            }
        else if(z<x){
            printf("%d\n%d\n%d\n\n",y,z,x);
            printf("%d\n%d\n%d\n",a,b,c);
            }
    }
    else if(z<x&&z<y){
        if(x<y){
            printf("%d\n%d\n%d\n\n",z,x,y);
            printf("%d\n%d\n%d\n",a,b,c);
            }
        else if(y<x){
            printf("%d\n%d\n%d\n\n",z,y,x);
            printf("%d\n%d\n%d\n",a,b,c);
            }
    }
    return 0;
}
