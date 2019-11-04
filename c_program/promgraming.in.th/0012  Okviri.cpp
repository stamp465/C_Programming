#include<cstdio>
#include<math.h>
#include<cstring>

int main()
{
	char word[15];
	scanf("%s",&word);
	
	printf(".");
	for(int j=1;j<=strlen(word);j++)
	{
		
			for(int k=1;k<=4;k++)
			{
				if(k==2&&j%3==0)
					printf("*");
				else if(k==2&&j%3!=0)
					printf("#");
				else
					printf(".");
			}
		
	}
	printf("\n");
	
	printf(".");
	for(int j=1;j<=strlen(word);j++)
	{
		
			for(int k=1;k<=4;k++)
			{
				if((k==1||k==3)&&j%3==0)
					printf("*");
				else if((k==1||k==3)&&j%3!=0)
					printf("#");
				else
					printf(".");
			}
		
	}
	printf("\n");
	
	printf("#");
	for(int j=1;j<=strlen(word);j++)
	{
		
			for(int k=1;k<=4;k++)
			{
				if((k==2||k==4)&&j%3==0)
				{
					if(k==2)	printf("%c",word[j-1]);
					else printf("*");
				}
				else if((k==4)&&(j+1)%3==0&&j!=strlen(word))
				{
					printf("*");
				}
				else if((k==2||k==4)&&j%3!=0)
					if(k==2)	printf("%c",word[j-1]);
					else printf("#");
				else
					printf(".");
			}
		
	}
	printf("\n");
	
	printf(".");
	for(int j=1;j<=strlen(word);j++)
	{
		
			for(int k=1;k<=4;k++)
			{
				if((k==1||k==3)&&j%3==0)
					printf("*");
				else if((k==1||k==3)&&j%3!=0)
					printf("#");
				else
					printf(".");
			}
		
	}
	printf("\n");
	
	printf(".");
	for(int j=1;j<=strlen(word);j++)
	{
		
			for(int k=1;k<=4;k++)
			{
				if(k==2&&j%3==0)
					printf("*");
				else if(k==2&&j%3!=0)
					printf("#");
				else
					printf(".");
			}
		
	}
}
