#include<cstdio>
#include<cmath>
using namespace :: std;
int main()
{
	int M,N,sumM=0,sumN=0,check=0;
	scanf("%d %d",&M,&N);
	int C_M,i;
	for(i=2,C_M=1;abs(C_M)!=M;i++)
	{
		sumM += C_M;
		if(i%2==0)	C_M = -1*(2*i-1);
		else	C_M = 2*i-1;
	}
	sumM += C_M;		//printf("%d\n",sumM);

	for(i=2,C_M=1;abs(C_M)!=N;i++)
	{
		sumN += C_M;
		if(i%2==0)	C_M = -1*(pow(2,i-1));
		else	C_M = pow(2,i-1);
	}
	sumN += C_M;		//printf("%d\n",sumN);
	printf("%d",sumN*sumM);
}
