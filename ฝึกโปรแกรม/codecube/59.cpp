#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int M,N,alpha=65;
    scanf("%d %d",&M,&N);
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%c",alpha);
            alpha++;
            if(alpha>90)    alpha = 65;
        }
        printf("\n");
    }
}
