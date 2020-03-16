#include<cstdio>
int main()
{
	int N;
	float max = -1;
	scanf("%d",&N);
	struct{
		char ID[9];
		char name[31];
		char surname[51];
		float score;
	}student[N];
	int j;
	for(int i=0;i<N;i++)
	{
		scanf("%s",&student[i].ID);
		scanf("%s",&student[i].name);
		scanf("%s",&student[i].surname);
		scanf("%f",&student[i].score);
		if(student[i].score>max)
		{
			max = student[i].score;
			j = i;
		}
	}
	printf("%s ",student[j].ID);
	printf("%s ",student[j].name);
	printf("%s ",student[j].surname);
	printf("%.2f",student[j].score);
}
