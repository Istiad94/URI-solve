#include <stdio.h>
main()
{
    int gas=0,alco=0,dis=0,x;
    for(;;){
        scanf("%d",&x);
        if(4<x||x<1){
            scanf("%d", &x);
            if(x==4){
                printf("MUITO OBRIGADO\n");
                printf("Alcool: %d\n",alco);
                printf("Gasolina: %d\n",gas);
                printf("Diesel: %d\n",dis);
                return 0;
            }
            else if(x==1) alco++;
            else if(x==2) gas++;
            else if(x==3) dis++;
            else if(x==4) break;
        }
        else if(x==1) alco++;
        else if(x==2) gas++;
        else if(x==3) dis++;
        else if(x==4) break;
    }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n",alco);
        printf("Gasolina: %d\n",gas);
        printf("Diesel: %d\n",dis);
    return 0;
}
