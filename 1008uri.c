#include<stdio.h>
main()
{
    int number, salary;
    double hour;
    scanf("%d%d%lf", &number,&salary,&hour);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", (salary*hour));
    return 0;
}
