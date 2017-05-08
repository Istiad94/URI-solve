#include <stdio.h>
main()
{
	int time, speed;
	scanf("%d%d",&time,&speed);
	double fuel=(time*speed)/12.0;
			printf("%.3lf\n",fuel);
return 0;
}
