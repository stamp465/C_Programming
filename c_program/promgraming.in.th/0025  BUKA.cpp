#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	
	char D[100],M[100];
	char a[10];
	gets(D);
	gets(a);
	gets(M);
	
	if(a[0]=='*')
	{
		if(strlen(D)<strlen(M))
		{
			cout << M ;
			for(int i=0;i<strlen(D)-1;i++)
			{
			printf("0");
			}
		}
		else
		{
			cout << D ;
			for(int i=0;i<strlen(M)-1;i++)
			{
			printf("0");
			}
		}
		
	}
	
	else if(a[0]=='+')
	{
		if(strlen(D)<strlen(M))
		{
			printf("1");
			for(int i=0;i<strlen(M)-strlen(D)-1;i++)
			{
				printf("0");
			}
			cout << D << endl;
		}
		else if(strlen(D)==strlen(M))
		{
			printf("2");
			for(int i=0;i<strlen(M)-1;i++)
			{
				printf("0");
			}
		}
		else
		{
			printf("1");
			for(int i=0;i<strlen(D)-strlen(M)-1;i++)
			{
				printf("0");
			}
			cout << M << endl;
		}
	}
	
}
