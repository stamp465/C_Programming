#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    N = N/2 +1;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("A");
        }
        for(int j=N;j>i;j--)
        {
            printf("1");
        }
        printf("\n");
    }
    for(int i=1;i<N;i++)
    {
        for(int j=N;j>i;j--)
        {
            printf("A");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
