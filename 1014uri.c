#include <stdio.h>
#include <math.h>
main()
{
    int distance ;
    double fuel;
    scanf("%d%lf", &distance,&fuel);
    printf("%.3lf km/l\n", (distance/fuel));
    return 0;
}
