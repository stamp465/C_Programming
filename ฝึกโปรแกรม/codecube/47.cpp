#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=1;
    while(k==1)
    {
        sort(arr,arr+N);
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(arr[j]>arr[i])
                {
                    arr[i] = arr[j];
                    k=1;
                }
            }
        }
    }


}
