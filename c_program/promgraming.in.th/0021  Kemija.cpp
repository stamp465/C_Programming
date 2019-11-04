#include<stdio.h>
#include<string.h>
#include<math.h>

int sum[5];

int main()
{
	
	char arr[1000];
		gets(arr);
	for(int i=0;i<strlen(arr);i++)
	{
		if(arr[i]=='a')
		{
			if(arr[i+1]=='p'&&arr[i+2]=='a')
			{
				printf("a");
				i+=2;
			}
			else
				printf("apa");
		}
		
		else if(arr[i]=='e')
		{
			if(arr[i+1]=='p'&&arr[i+2]=='e')
			{
				printf("e");
				i+=2;
			}
			else
				printf("epe");
		}
		
		else if(arr[i]=='i')
		{
			if(arr[i+1]=='p'&&arr[i+2]=='i')
			{
				printf("i");
				i+=2;
			}
			else
				printf("ipi");
		}
		
		else if(arr[i]=='o')
		{
			if(arr[i+1]=='p'&&arr[i+2]=='o')
			{
				printf("o");
				i+=2;
			}
			else
				printf("opo");
		}
		
		else if(arr[i]=='u')
		{
			if(arr[i+1]=='p'&&arr[i+2]=='u')
			{
				printf("u");
				i+=2;
			}
			else
				printf("upu");
		}
		
		else printf("%c",arr[i]);
	}
	
	
}
