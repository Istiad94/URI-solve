#include<stdio.h>
main()
{
    char name[100000];
    double fsalary,tsell;
    gets(name);
    scanf("%lf%lf",&fsalary,&tsell);
    tsell=(fsalary+(tsell*.15));
    printf("TOTAL = R$ %.2lf\n", tsell);
    return 0;
}
