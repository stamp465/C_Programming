#include<cstdio>
int main()
{
	int N;
	float max = -1;
	scanf("%d",&N);
	struct{
		char ID[31];
		int score = 0;;
	}student[10];
	int j,min = 100000;
	for(int i=1;i<=8;i++)
	{
		scanf("%s",&student[i].ID);
	}
	int K;
	scanf("%d",&K);
	for(int i=1;i<=K;i++)
	{
		int b;
		scanf("%d",&b);
		student[b].score++;
	}
	for(int i=1;i<=8;i++)
	{
		if(student[i].score<min)
		{
			min = student[i].score;
		}
	}
	for(int i=1;i<=8;i++)
	{
		if(student[i].score>min)
		{
			printf("%s\n",student[i].ID);
		}
	}
}
