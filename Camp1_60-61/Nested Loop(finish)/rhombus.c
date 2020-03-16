#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N/2+1;i++)
    {
        for(int j=N/2+1-i;j>=1;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        for(int j=N/2+1-i;j>=1;j--)
        {
            printf(" ");
        }
        printf("\n");
    }
    for(int i=N/2;i>=1;i--)
    {
        for(int j=N/2+1-i;j>=1;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        for(int j=N/2+1-i;j>=1;j--)
        {
            printf(" ");
        }
        printf("\n");
    }

}
