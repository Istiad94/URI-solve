#include <stdio.h>
int main()
{
    double a,b,c,x;
    scanf("%lf%lf%lf",&a,&b,&c);
    x=.5*a*c;
    printf("TRIANGULO: %.3lf\n",x);
    x=3.14159*c*c;
    printf("CIRCULO: %.3lf\n",x);
    c=.5*(a+b)*c;
    printf("TRAPEZIO: %.3lf\n",c);
    c=b*b;
    printf("QUADRADO: %.3lf\n",c);
    c=a*b;
    printf("RETANGULO: %.3lf\n",c);
    return 0;
}
