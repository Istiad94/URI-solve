#include<stdio.h>
int main()
{
    while(1)
    {
        int test;
        scanf("%d", &test);
        if(test==0)
            break;
        while(test--)
        {
            int option[5], i, pos, correct=0;
            char answer[5]="ABCDE";
            for(i=0;i<5;i++)
            {
                scanf("%d", &option[i]);
                if(option[i]<=127)
                {
                    correct++;
                    pos=i;
                }
            }
            if(correct>1||correct==0)
                printf("*\n");
            else
                printf("%c\n", answer[pos]);
        }
    }
    return 0;
}
