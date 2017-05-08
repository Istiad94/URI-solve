#include <stdio.h>
void average(double x, double y, double z)
{
    printf("%0.1lf\n",(x*2+y*3+z*5)/10);
}
main()
{
    int t,i;
    double a,b,c;
    scanf("%d", &t);
        for(i=0;i<t;i++){
            scanf("%lf %lf %lf",&a, &b, &c);
            average(a,b,c);
        }
    return 0;
}
