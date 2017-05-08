#include<stdio.h>
int main()
{
    int age,i=0;
    double sum=0;
    double avg;
    for(;;){
        scanf("%d", &age);
        if(age<0)
            break;
        else {
            sum=sum+age;
            i++;
        }
    }
    avg=sum/i;
    printf("%0.2lf\n", avg);
    return 0;
}
