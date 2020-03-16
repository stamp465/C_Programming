#include<stdio.h>
int check[6000001];
int main()
{
    long long int i,j,k,N,count=0;
    for(i=2;i<6000001;i++)
    {
        if(check[i]==0)
        for(j=2*i;j<6000001;j+=i)
        {
            if(check[j]==0)    check[j]=1;
        }
    }
    scanf("%lld",&N);
    for(i=2;i<=N;i++)
    {
        if(check[i]==0) count++;
    }
    printf("%lld",count);
}
