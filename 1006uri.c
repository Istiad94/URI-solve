#include <stdio.h>
main()
{
	double x,y,z,average;
	scanf("%lf%lf%lf",&x,&y,&z);
	average=(x*2.0+y*3.0+z*5.0)/10;
	if(0<=average&&average<=10){
			printf("MEDIA = %.1lf\n",average);
		}
	else {
		return 0;
	}
return 0;
}
