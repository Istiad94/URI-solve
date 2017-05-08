#include <stdio.h>
#include <math.h>
main()
{
    double x1,x2,y1,y2,distance;
    scanf("%lf%lf%lf%lf", &x1,&y1,&x2,&y2);
    distance=pow((pow((x1-x2),2)+pow((y1-y2),2)),.5);
    printf("%.4lf\n",distance);
    return 0;
}
