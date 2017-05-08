#include<stdio.h>
int LED ( char ch )
{
    if(ch=='1')
        return 2;
    else if(ch=='2'||ch=='3'||ch=='5')
        return 5;
    else if(ch=='4')
        return 4;
    else if(ch=='6'||ch=='9'||ch=='0')
        return 6;
    else if(ch=='7')
        return 3;
    else if(ch=='8')
        return 7;
}
main()
{
    //freopen("e:\\1168 URI Test Case (input).txt", "r", stdin);
    //freopen("e:\\1168 URI Test Case (output).txt", "w", stdout);
    int T,led,i,j;
    scanf("%d", &T);
    char str[105];
    int sum=0;
    for(i=0;i<T;i++){
        scanf("%s(^\n)", &str);
        for(j=0;str[j]!='\0';j++)
        {
            led=LED(str[j]);
            sum=led+sum;
        }
        printf("%d leds\n",sum);
        sum=0;
    }
    return 0;
}
