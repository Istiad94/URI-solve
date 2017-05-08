#include<stdio.h>
main()
{
    double salary,beton;
    char c='%';
    scanf("%lf", &salary);
    if(salary >=0.00&&salary<=400.00){
        beton=salary+(salary*0.15);
        salary=beton - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 15 %c\n",beton,salary,c);
    }
    else if(salary >=400.01&&salary<=800.00){
        beton=salary+(salary*0.12);
        salary=beton - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 12 %c\n",beton,salary,c);
    }
    else if(salary >=800.01&&salary<=1200.00){
        beton=salary+(salary*0.10);
        salary=beton - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 10 %c\n",beton,salary,c);
    }
    else if(salary >=1200.01&&salary<=2000.00){
        beton=salary+(salary*0.07);
        salary=beton - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 7 %c\n",beton,salary,c);
    }
    else if(salary >=2000){
        beton=salary+(salary*0.04);
        salary=beton - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 4 %c\n",beton,salary,c);
    }
    return 0;
}
