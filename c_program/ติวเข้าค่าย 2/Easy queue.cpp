#include<bits/stdc++.h>
using namespace std;
int N,i;
int main()
{
    queue<int> a;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        int c;
        scanf("%d",&c);
        if(c==1)
        {
            int d;
            scanf("%d",&d);
            a.push(d);
        }
        else if(c==2)
        {
            if(!a.empty())  a.pop();
        }
        else if(c==3)
        {
            if(!a.empty())  printf("%d\n",a.front());
            else            printf("Empty!\n");
        }
    }
}
