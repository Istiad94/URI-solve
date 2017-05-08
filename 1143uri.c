#include <stdio.h>
#include<math.h>
main()
{
    int count=0,T,i,j,z;
    scanf("%d",&T);
    if(T>1&&T<1000){
        for(i=1;count<T;i++){
            j=i*i;
            z=i*i*i;
            printf("%d %d %d\n",i,j,z);
            count++;
        }
    return 0;
    }
    else {
        return 0;
    }
}
