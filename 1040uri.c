#include <stdio.h>
main()
{
    double n1,n2,n3,n4,ave,score;
    scanf("%lf %lf %lf %lf", &n1,&n2,&n3,&n4);
    ave=(((n1*2)+(n2*3)+(n3*4)+(n4*1))/10);
    printf("Media: %0.1lf\n",ave);
    if(ave>=7.0)
        printf("Aluno aprovado.\n");
    else if(ave <5.00)
        printf("Aluno reprovado.\n");
    else if(5.00<=ave<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &score);
        printf("Nota do exame: %0.1lf\n", score);
        score=(score+ave)/2;
        if(score>=5.0){
           printf("Aluno aprovado.\n");
           printf("Media final: %0.1lf\n",score);
        }
        else if (score<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1lf\n", score);
        }
    }
    return 0;
}
