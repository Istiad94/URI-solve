#include <stdio.h>
main()
{
    //freopen("d:\\1117in.txt", "r", stdin);
    //freopen("d:\\1117out.txt", "w", stdout);
    double x,y;
    for(;;){
        scanf("%lf", &x);
        if(x>=0&&x<=10)
            break;
        else
            printf("nota invalida\n");
    }
    for(;;){
        scanf("%lf", &y);
        if(y>=0&&y<=10)
            break;
        else
            printf("nota invalida\n");
    }
    double average=(x+y)/2;
    printf("media = %0.2lf\n",average);
    return 0;
}
