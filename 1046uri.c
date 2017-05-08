#include <stdio.h>
main()
{
    int x,y,h;
    scanf("%d %d", &x,&y);
    if(x>y){
        h=(24-x)+y;
        if(h<=24)
            printf("O JOGO DUROU %d HORA(S)\n",h);
        else
            return 0;
    }
    else if(x==y){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(y>x){
        h=y-x;
        if(h<=24)
            printf("O JOGO DUROU %d HORA(S)\n",h);
        else
            return 0;
    }
    return 0;
}
