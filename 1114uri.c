#include <stdio.h>
main()
{
    int x;
    for(;x = 2002;){
        scanf("%d",&x);
        if(x==2002){
            printf("Acesso Permitido\n");
            return 0;
        }
        else if(x!=2002){
            printf("Senha Invalida\n");
        }
    }
}
