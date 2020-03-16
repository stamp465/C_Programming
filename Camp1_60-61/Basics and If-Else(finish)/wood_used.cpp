#include<cstdio>
int main()
{
	int M,N,P,T,MP,MT,NP,NT;
	scanf("%d %d",&M,&N);
	MP = 2*M;
	MT = 6*M;
	NP = N;
	NT = 4*N;
	printf("%d %d",MP+NP,MT+NT);

}
