#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    int arr[5],max=0,min=10000,max2=0,min2=10000;
    scanf("%d",&N);
    int maxarr[N];
    for(int i=0;i<N;i++)
    {
        max=0,min=10000;
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[j]);
            if(arr[j]>max)  max = arr[j];
            if(arr[j]<min)  min = arr[j];
        }
        maxarr[i] = max - min;
        if(maxarr[i]>max2)  max2 = maxarr[i];
        if(maxarr[i]<min2)  min2 = maxarr[i];
    }
    printf("%d %d %d",max2,min2,max2-min2);

}
