
#include <stdio.h>
main()
{
    int game=0,gg=0,draw=0,ig=0,inter,gremio;
    game:
        for(;;){
        scanf("%d %d", &inter,&gremio);
        if(inter>=0&&gremio>=0){
            game++;
            if(inter>gremio)      ig++;
            else if(gremio>inter) gg++;
            if(inter==gremio)     draw++;
        }
        break;
    }
    int T;
    for(;;){
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&T);
        if(T==1)
            goto game;
        else if(T==2){
            printf("%d grenais\n",game);
            printf("Inter:%d\n",ig);
            printf("Gremio:%d\n",gg);
            printf("Empates:%d\n",draw);
            if(ig==gg)      printf("Nao houve vencedor\n");
            else if(ig>gg)  printf("Inter venceu mais\n");
            else if(gg>ig)  printf("Gremio venceu mais\n");
            return 0;
        }
    }
}
