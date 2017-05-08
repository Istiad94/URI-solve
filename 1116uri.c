#include <stdio.h>
main()
{
    double x,y;
    int i,T;
    scanf("%d", &T);
    for(i=+0;i<T;i++){
        scanf("%lf %lf", &x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else
            printf("%0.1lf\n",(x/y));
    }
    return 0;
}
