#include<stdio.h>
int main()
{
    int N,sum=0,sumN=0,sumM=0;
    scanf("%d",&N);
    for(int i=0;i<7;i++)
    {
        int a;
        scanf("%d",&a);
        sum += a;
    }
    if(sum>250)
    {
        sumM += 80*100;
        sumM += 70*150;
        sumM += (sum-250)*60;
    }
    else if(sum>100)
    {
        sumM += 80*100;
        sumM += (sum-100)*70;
    }
    else
    {
        sumM += sum*80;
    }
    sumN += N*sum;
    printf("%d\n%d\n",sumM,sumN);
    if(sumM-sumN>=0)    printf("No Profit");
    else                printf("%d",sumN-sumM);
}
