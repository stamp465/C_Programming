#include<bits/stdc++.h>
using namespace std;
int money[1000],check[1000],value[1000];
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&value[i]);
    }
    int countt=0,now=1,peo=1;
    while(countt!=N)
    {
        int dice;
        scanf("%d",&dice);
        while(1)
        {
            if(check[now]==1)
            {
                now++;
                if(now>N)   now=1;
            }
            else{
                if(dice==0)
                {
                    //cout << peo << " " << now << " " << value[now] << endl;
                    money[peo] += value[now];
                    check[now] = 1;
                    break;
                }
                else{
                    dice--;
                    now++;
                    if(now>N)   now=1;
                }
            }
        }
        peo++;
        if(peo>K)   peo=1;
        countt++;
    }
    for(int i=1;i<=K;i++)
    {
        printf("%d\n",money[i]);
    }
}
