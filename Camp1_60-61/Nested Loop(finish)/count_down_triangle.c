#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=N,k=0;i>0;i--,k++)
    {
        for(int j=0;j<k;j++)
        {
            printf(" ");
        }
        for(int j=i;j>0;j--)
        {
            printf("%d",i%10);
        }
        printf("\n");

    }
}
