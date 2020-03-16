#include<stdio.h>
int main()
{
    int N,K;
    scanf("%d %d",&K,&N);
    int arr[N];
    int d = 100 * K;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=1;
    for(int i=0;i<N;i++)
    {
        while(1)
        {
            if(arr[i]<=d){
                printf("%d\n",j);
                d -= arr[i];
                break;
            }
            else{
                d += 100*K;
                j++;
            }
        }
    }
}
