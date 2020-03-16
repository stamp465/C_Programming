#include<stdio.h>
int main()
{
	long int N,i,j,num[501],k[501],same=0,count=0,mostnum=0;
	scanf("%ld",&N);

//	for(i=0;i<N;i++)
//	{
//		k[i] = 0;
//	}
	for(i=0;i<N;i++)
	{
		scanf("%ld",&num[i]);
	}
	
	for(i=0;i<N;i++)
	{
		count=0;
		for(j=i+1;j<N;j++)
		{
			if(num[i]==num[j])
			{
				count++;
			}
		}
		if(count==same)
		{
			if(mostnum<num[i])
			{
				same = count;
				mostnum = num[i];
			}
		}
		else if(count>same)
		{
			same = count;
			mostnum = num[i];
		}
	}
	
	printf("%ld\n",mostnum);
	printf("%ld",same+1);

}

/*12
4 4 5 2 2 5 2 5 1 9 9 4*/
