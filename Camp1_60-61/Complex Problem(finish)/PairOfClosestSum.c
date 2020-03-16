#include<stdio.h>
#include<math.h>
int main()
{
    long int K;
    int N,i,j;
    scanf("%ld %d",&K,&N);
    long int arr[N],plus,store_i,store_j,checkplus=0,plus_see,dis,dis_plus,dis_see;
    for(i=0;i<N;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            //printf("0...%d %d...",arr[i],arr[j]);
            plus_see = arr[i] + arr[j];
            dis_see = abs(arr[i]-arr[j]);
            if(checkplus==0&&arr[i]!=arr[j])
            {
                //printf("1...\n");
                checkplus = 1;
                plus = plus_see;
                store_i = i;
                store_j = j;
                dis = dis_see;
                dis_plus = abs(K-plus_see);
            }
            else if(abs(K-plus_see)==dis_plus&&arr[i]!=arr[j])
            {
                if(dis_see<dis)
                {
                    //printf("3...\n");
                    plus = plus_see;
                    store_i = i;
                    store_j = j;
                    dis = dis_see;
                    dis_plus = abs(K-plus_see);
                }
            }
            else if(abs(K-plus_see)<dis_plus&&arr[i]!=arr[j])
            {
                //printf("2...\n");
                plus = plus_see;
                store_i = i;
                store_j = j;
                dis = dis_see;
                dis_plus = abs(K-plus_see);
            }

        }
    }
    if(arr[store_i]>arr[store_j])
    {
        int o=arr[store_i];
        arr[store_i] = arr[store_j];
        arr[store_j] = o;
    }
    printf("%d\n%d %d",plus,arr[store_i],arr[store_j]);
}
