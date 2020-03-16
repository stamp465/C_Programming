#include<stdio.h>
int main()
{
    int N,count=0;
    scanf("%d",&N);
    while(N>=5)
    {
        count += N/5;
        N /= 5;
    }
    printf("%d",count);
}
