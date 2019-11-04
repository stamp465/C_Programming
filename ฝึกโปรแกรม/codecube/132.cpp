#include<stdio.h>
int main()
{
    long long int N,toy = 1;
    scanf("%lld",&N);
    for(long long int i=0;i<N;i++)
    {
        toy += 3*toy;
    }
    printf("%lld",toy);
}
