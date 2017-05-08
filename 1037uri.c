#include <stdio.h>
main()
{
    double number;
    scanf("%lf",&number);
    if(number>=0&&number<=100){
        if(number>=0&&number<=25.0000){
            printf("Intervalo [0,25]\n");
        }
        else if(number>=25.00001&&number<=50.0000000){
            printf("Intervalo (25,50]\n");
        }
        else if(number>=50.00000001&&number<=75.0000000000){
            printf("Intervalo (50,75]\n");
        }
        else if(number>=75.00000000001&&number<=100){
            printf("Intervalo (75,100]\n");
        }
        return 0;
    }
    else {
        printf("Fora de intervalo\n");
        return 0;
    }
}
