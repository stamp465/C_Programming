#include<cstdio>
using namespace std;
int arr[1001][1001];
int main()
{
    int N,count=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(arr[x][y]==0)
        {
            count++;
            arr[x][y] = 1;
        }
    }
    printf("%d",count);
}
