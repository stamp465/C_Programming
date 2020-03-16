#include<stdio.h>
int main()
{
    int P,i,winner=-1;
    scanf("%d",&P);
    int even = P,odd = P;
    int be_1=0,be_2=0;
    for(i=1;i<=2*P;i++)
    {
        int kick;
        scanf("%d",&kick);
        if(kick%2==0)
        {
            odd -=1;
            //printf("odd-- = %d",odd);
            if(be_1%2==0&&be_2%2==0&&i>2)
            {
                odd-=2;
                //printf("...odd-- = %d",odd);
            }
            if(odd<=0&&winner==-1)
            {
                winner = kick;
            }
            //printf("\n");
        }
        if(kick%2==1)
        {
            even-=1;
            //printf("even-- = %d",even);
            if(be_1%2==1&&be_2%2==1&&i>2)
            {
                even-=2;
                //printf("...even-- = %d",even);
            }
            if(even<=0&&winner==-1)
            {
                winner = kick;
            }
            //printf("\n",odd);
        }
        if(i>2) be_2 = be_1;
        if(i>1) be_1 = kick;
    }
    printf("%d\n%d",winner%2,winner);
}
