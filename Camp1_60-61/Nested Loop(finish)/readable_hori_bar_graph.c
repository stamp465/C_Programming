#include<stdio.h>
int main()
{
    while(1)
    {
        int N;
        scanf("%d",&N);
        if(N<=0)    break;
        for(int i=1;i<=N;i++)
        {
            if(i==N)        printf("%d",i%10);
            else if(i%5==0) printf("X");
            else            printf("*");
        }
        printf("\n");
    }
}
