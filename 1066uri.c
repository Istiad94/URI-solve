#include <stdio.h>
main()
{
    int ara[5],i,even= 0,odd = 0,pos = 0,neg = 0;
    for(i=0;i<5;i++){
        scanf("%d",&ara[i]);
        if(ara[i]%2==0){
            even++;
        }
        if(ara[i]%2!=00){
            odd++;
        }
        if(ara[i]>0){
            pos++;
        }
        if(ara[i]<0){
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);
    return 0;
}
