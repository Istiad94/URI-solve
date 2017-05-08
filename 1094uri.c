#include<stdio.h>
main()
{
    int T,i;
    double n,rabbit=0,rat=0,frog=0,animal;
    char a,b='%';
    scanf("%d",&T);
    for(i=0;i<T;++i){
        scanf("%lf %c",&n,&a);
        if(n>=1&&n<=15){
            if(a=='C'){
                rabbit=rabbit+n;}
            else if(a=='R'){
                rat=rat+n;}
            else if(a=='S'){
                frog=frog+n;}
        }
    }
    animal=(rabbit+rat+frog);
    printf("Total: %0.lf cobaias\n",animal);
    printf("Total de coelhos: %0.lf\n",rabbit);
    printf("Total de ratos: %0.lf\n",rat);
    printf("Total de sapos: %0.lf\n",frog);
    rabbit=(rabbit/animal)*100;
    rat=(rat/animal)*100;
    frog=(frog/animal)*100;
    printf("Percentual de coelhos: %0.2lf %c\n",rabbit,b);
    printf("Percentual de ratos: %0.2lf %c\n",rat,b);
    printf("Percentual de sapos: %0.2lf %c\n",frog,b);
    return 0;
}
