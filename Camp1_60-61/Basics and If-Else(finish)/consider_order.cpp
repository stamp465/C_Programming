#include<cstdio>
int main()
{
	int M,N,P,T,MP,MT,NP,NT,PU,TU;
	scanf("%d %d",&P,&T);
	scanf("%d %d",&M,&N);
	MP = 2*M;
	MT = 6*M;
	NP = N;
	NT = 4*N;
	PU = MP+NP;
	TU = MT+NT;
	if(P>=PU&&T>=TU)	printf("Yes %d %d\n",P-PU,T-TU);
	if(P<PU||T<TU)
	{
		if(P>=PU)		printf("No 0 %d\n",TU-T);
		else if(T>=TU)	printf("No %d 0\n",PU-P);
		else			printf("No %d %d\n",PU-P,TU-T);
	}
}
