#include <stdio.h>
int main()
{
    //freopen("d:\\1021 Test Case 6.txt","w", stdout);
    int i;
    double money;
    scanf("%lf",&money);
    money=money*100;
    int c=(int)money;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n",(c/10000));
    c%=10000;
    printf("%d nota(s) de R$ 50.00\n",(c/5000));
    c%=5000;
    printf("%d nota(s) de R$ 20.00\n",(c/2000));
    c%=2000;
    printf("%d nota(s) de R$ 10.00\n",(c/1000));
    c%=1000;
    printf("%d nota(s) de R$ 5.00\n",(c/500));
    c%=500;
    printf("%d nota(s) de R$ 2.00\n",(c/200));
    c%=200;
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",(c/100));
    c%=100;
    printf("%d moeda(s) de R$ 0.50\n",(c/50));
    c%=50;
    printf("%d moeda(s) de R$ 0.25\n",(c/25));
    c%=25;
    printf("%d moeda(s) de R$ 0.10\n",(c/10));
    c%=10;
    printf("%d moeda(s) de R$ 0.05\n",(c/5));
    c%=5;
    printf("%d moeda(s) de R$ 0.01\n",(c/1));
    return 0;
}
