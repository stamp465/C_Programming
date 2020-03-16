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
		int  year;
	}student[N];
	int j;
	for(int i=0;i<N;i++)
	{
		scanf("%s",&student[i].ID);
		scanf("%s",&student[i].name);
		scanf("%s",&student[i].surname);
		scanf("%d",&student[i].year);
	}
	int K;
	bool check = false;
	scanf("%d",&K);
	for(int i=0;i<N;i++)
	{
		if(student[i].year==K)
		{
			check = true;
			printf("%s ",student[i].ID);
			printf("%s ",student[i].name);
			printf("%s\n",student[i].surname);
			//printf("%d\n",student[i].year);
		}
	}
	if(check==false)	printf("None");

}
