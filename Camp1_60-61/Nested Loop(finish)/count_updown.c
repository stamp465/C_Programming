#include<stdio.h>
#include<math.h>
int main()
{
    int N,start = 1;;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++)
    {
        if(abs(start-arr[i])>10)
        {
            printf("%d . . . %d",start,arr[i]);
        }
        else
        {
            if(start>=arr[i])
            {
                for(int j=start;j>=arr[i];j--)
                {
                    printf("%d ",j);
                }
            }
            else
            {
                for(int j=start;j<=arr[i];j++)
                {
                    printf("%d ",j);
                }
            }
        }
        start = arr[i];
        printf("\n");
    }
}
