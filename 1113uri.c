#include <stdio.h>
main()
{

    //freopen("d:\\IN.txt","r", stdin);
    //freopen("d:\\out.txt","w", stdout);
    int x,y;
    for(;;){
        scanf("%d %d", &x,&y);
        if(x<y)
            printf("Crescente\n");
        else if(y<x)
            printf("Decrescente\n");
        else if(x==y)
            break;
    }
    return 0;
}
