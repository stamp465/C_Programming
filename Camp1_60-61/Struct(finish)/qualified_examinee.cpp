#include<cstdio>
#include<string.h>
int main()
{
	int N;
	float sum=0;
	scanf("%d",&N);
	struct{
		char ID[5];
		float score;
	}student[N];
	for(int i=0;i<N;i++)
	{
		scanf("%s %f",&student[i].ID,&student[i].score);
		sum += student[i].score;
	}
	sum /= N;
	int count = 0;
	for(int i=0;i<N;i++)
	{
		if(student[i].score>=sum)
		{
			count++;
			//printf("%s\n",student[i].ID);
		}
	}
	printf("%d\n",count);
	for(int i=0;i<N;i++)
	{
		if(student[i].score>=sum)
		{
			//count++;
			printf("%s\n",student[i].ID);
		}
	}
}
