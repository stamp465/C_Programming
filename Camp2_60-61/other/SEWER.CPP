#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > vec[100000];

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=0;i<M;i++){
        int st,high;
        scanf("%d %d",&st,&high);
        vec[st].push_back({high,st+1});
        vec[st+1].push_back({high,st});
    }
    for(int i=1;i<=N;i++){
        sort(vec[i].begin(),vec[i].end());
    }
    if(N==1){
        printf("%d\n",N);
    }
    else{
        for(int i=1;i<=N;i++){
            int savehigh=100000,savetao=i;
            while(1){
                int ch=0;
                for(int j=vec[savetao].size()-1;j>=0;j--){
                    if(vec[savetao][j].first<savehigh){
                        savehigh = vec[savetao][j].first;
                        savetao = vec[savetao][j].second;
                        cout << savehigh << " " << savetao << endl;
                        ch = 1;
                        break;
                    }
                }
                if(ch==0)   break;
            }
            printf("%d\n",savetao);
        }
    }
}
