#include<stdio.h>
int main()
{
    while(1)
    {
        long long int N;
        scanf("%lld",&N);
        if(N==0)    break;
        else{
            printf("Y %lld\n",N*N-N+1);
        }
    }
}
