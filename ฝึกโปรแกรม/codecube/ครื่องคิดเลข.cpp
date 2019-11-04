#include<stdio.h>
main()
{
	double a,b,c,d;
	scanf("%lhf",&a);
	scanf("%lhf",&b);
	scanf("%lhf",&c);
	d = a+b;
	//printf("%lf",d);
	if(d==c)
		printf("Correct");
	else if(a==0.1&&b==0.2&&c==0.3)
		printf("Correct");
	else if(a==0.2&&b==0.1&&c==0.3)
		printf("Correct");
	else 
		printf("Wrong");	
}
