#include<stdio.h>
#include<string.h>
#include<math.h>
int sum[5];
int main()
{
	
	int D,M,sum=0;
	scanf("%d %d",&D,&M);
	for(int i=M-1;i>0;i--)
	{
		if(i==2)	sum+=28;
		else if(i==4||i==6||i==9||i==11)
		{
			sum+=30;
		}
		else	sum+=31;
	}
	sum+=D;
	switch (sum%7)
	{
    case 1:
        printf("Thursday");
        break;
    case 2:
        printf("Friday");
        break;
	case 3:
        printf("Saturday");
        break;
    case 4:
        printf("Sunday");
        break;
    case 5:
        printf("Monday");
        break;
    case 6:
        printf("Tuesday");
        break;
    case 0:
        printf("Wednesday");
        break;
	}
}
