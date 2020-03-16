#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=N,K=1;i>=1;i-=2,K++)
    {
        for(int j=1;j<K;j++)
        {
            printf("1");
        }
        for(int j=i;j>=1;j--)
        {
            printf("A");
        }
        for(int j=1;j<K;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

