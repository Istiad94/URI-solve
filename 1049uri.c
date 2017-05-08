#include <stdio.h>
#include <string.h>
main()
{
    int len1,len2,len3;
    char str1[30],str2[30],str3[30];
    gets(str1);
    len1=strlen(str1);
    if(len1==10){
        gets(str2);
        len2=strlen(str2);
        if(len2==3){
            gets(str3);
            len3=strlen(str3);
            if(len3==9)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else if(len2==8){
            gets(str3);
            len3=strlen(str3);
            if(len3==9)
                printf("vaca\n");
            else
                printf("homem\n");
        }
    }
    else if(len1==12){
        gets(str2);
        len2=strlen(str2);
        if(len2==6){
            gets(str3);
            len3=strlen(str3);
            if(len3==10)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else if(len2==8){
            gets(str3);
            len3=strlen(str3);
            if(len3==10)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
    return 0;
}
