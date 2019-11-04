#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N+1]={0};
    string ch;
    map<int,int> mapp,mapp2;
    map<int,int>::reverse_iterator stt;
    map<int,int>::iterator st;
    for(int i=0;i<N;i++)
    {
        int d;  scanf("%d",&d);
        mapp.insert(pair<int,int>(d,i+1));
    }
    cin >> ch;
    for(int i=0;i<2*N;i++)
    {
        if(ch[i]=='0'){
                st = mapp.begin();
                printf("%d ",st->second);
                mapp2.insert(pair<int,int>(st->first,st->second));
                if(!mapp.empty())   mapp.erase(st);
        }
        if(ch[i]=='1'){
                stt = mapp2.rbegin();
                printf("%d ",stt->second);
                if(!mapp2.empty())   mapp2.erase(stt->first);
        }

    }
}
