#include<cstdio>
using namespace std;
int prime[500005];
int main()
{
    int N,count=0,B;
    scanf("%d %d",&N,&B);
    for(int i=2;i<=N;i++)
    {
        if(prime[i]==0)
        {
            count++;
            for(int j=i+i;j<=N;j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    if(count>B) printf("%d",count-B);
    else        printf("0");
}
