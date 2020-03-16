#include<stdio.h>
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    int B[3],countall=0;
    for(int i=0;i<N;i++)
    {
        int count=0;
        scanf("%d %d %d",&B[0],&B[1],&B[2]);
        for(int j=0;j<3;j++)
        {
            if(B[j]>=8) count++;
        }
        if(count>=2&&countall<=K)
        {   printf("Yes\n");    countall++; }
        else                        printf("No\n");
    }
    printf("%d",countall);
}
