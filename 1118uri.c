#include <stdio.h>
main()
{
    //freopen("d:\\in.txt","r", stdin);
    //freopen("d:\\out.txt","w", stdout);
    double x,y;
    label:                      //Initial Process
        for(;;){                //scanning 1st value
            scanf("%lf", &x);
            if(x>=0&&x<=10){
                break;
            }
            else {
                printf("nota invalida\n");
            }
        }
        for(;;){                //scanning 2nd value
            scanf("%lf", &y);
            if(y>=0&&y<=10){
                break;
            }
            else {
                printf("nota invalida\n");
            }
        }
        double sum=(x+y)/2.0;   //calculating average
        printf("media = %0.2lf\n",sum);//printing average
        int P;
        for(;;){                //Determining Next Step
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&P);
        if(P==2){
            return 0;
        }
        else if(P==1){
            goto label;
        }
    }
}
