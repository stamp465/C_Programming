#include<bits/stdc++.h>
using namespace std;
long int numch[100000];
long int sp[100000];
long int saveloo[100000];

int main()
{
    int N,all;
    long int countN=0;
    scanf("%d %d",&N,&all);
    vector<int> run[20000];
    for(int i=0;i<N;i++)
    {
        long int num,loo,speed;
        scanf("%ld %ld %ld",&num,&loo,&speed);
        run[loo].push_back(1);
        if(speed==sp[run[loo].size()-1]&&loo<saveloo[run[loo].size()-1])
        {
            sp[run[loo].size()-1] = speed;
            saveloo[run[loo].size()-1] = loo;
            numch[run[loo].size()-1] = num;
        }
        if(speed>sp[run[loo].size()-1])
        {
            sp[run[loo].size()-1] = speed;
            saveloo[run[loo].size()-1] = loo;
            numch[run[loo].size()-1] = num;
        }
        if(run[loo].size()>countN) countN = run[loo].size();
    }
    for(long int i=0;i<countN;i++)
    {
        printf("%ld\n",numch[i]);
    }
}
