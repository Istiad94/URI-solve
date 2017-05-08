#include <stdio.h>
main()
{
    int code[2],unit[2],i;
    double ppu[2];
    for(i=0;i<2;i++){
    scanf("%d%d%lf", &code[i],&unit[i],&ppu[i]);
    }
    double total=unit[0]*ppu[0]+unit[1]*ppu[1];
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
