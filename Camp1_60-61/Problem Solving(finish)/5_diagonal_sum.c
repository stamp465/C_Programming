#include<stdio.h>
int main()
{
    int a=1,sum=1,N;
    scanf("%d",&N);
    for(int i=N-1;i>0;i-=2)
    {
        a += i+i;
        sum += a;
        if(i>1)
        {
            a += i+i;
            sum += a;
        }
    }
    printf("%d",sum);
}
