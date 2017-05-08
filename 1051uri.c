#include<stdio.h>
main()
{
    double salary,tax1,diff;
    scanf("%lf",&salary);
    if(salary>=0.00&&salary<=2000.00){
        printf("Isento\n");
    }
    else if(salary>=2000.01&&salary<=3000.00){
        salary=(salary-2000)*.08;
        printf("R$ %0.2lf\n",salary);
    }
    else if(salary>=3000.01&&salary<=4500.00){
        diff=salary-3000;
        tax1=(diff*.18)+80;
        printf("R$ %0.2lf\n",tax1);
    }
    else if(salary>4500){
        diff=salary-4500;
        tax1=(diff*.28)+350;
        printf("R$ %0.2lf\n",tax1);
    }
    return 0;
}
