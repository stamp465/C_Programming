#include<cstdio>

int main()
{
	char score[6],A[3],B[3];
	for(int i=0;i<5;i++)
	{
		scanf("%s",A);
		scanf("%s",B);
		char a,b;
		if(A[0]<A[1])	a = A[0];
		else			a = A[1];
		if(B[0]<B[1])	b = B[0];
		else			b = B[1];
		if(a<b)			score[i] = 'W';
		else if(a==b)	score[i] = 'D';
		else			score[i] = 'L';
	}
	printf("%s",score);
}
