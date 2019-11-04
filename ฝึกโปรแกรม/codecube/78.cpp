#include<cstdio>
using namespace std;
int main()
{
    int score,arr[5],sum=0,check=0;
    scanf("%d",&score);
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(sum==score)
        {
            check=2;
            break;
        }
        if(sum-arr[i]==score)
        {
            check=1;
            arr[i]= 0;
            break;
        }
    }
    if(check==1||check==2)
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    else    printf("-1");
}
