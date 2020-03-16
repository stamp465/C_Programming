#include<stdio.h>
int main()
{
    while(1)
    {
        int N;
        scanf("%d",&N);
        if(N<1) break;
        for(int i=0;i<N;i++)    printf("*");
        printf("\n");
    }
}
