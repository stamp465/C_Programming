#include<bits/stdc++.h>
using namespace std;
pair<int,int> x[2000];
pair<int,int> y[2000];
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    for(int o=0;o<N;o++)
    {
        scanf("%d %d %d %d",&x[o].first,&y[o].second,&x[o].second,&y[o].first);

    }
    for(int o=0;o<M;o++)
    {
        int stx,eny,enx,sty;
        scanf("%d %d %d %d",&stx,&eny,&enx,&sty);
        int maxx=0;
        for(int i=0;i<N;i++){
            if(stx<x[i].first){
                //cout << "ch1...";
                if(enx<=x[i].first){ }
                else{
                    //cout << "ch1.1***";
                    if(sty<y[i].first){
                        //cout << "ch1.2***";
                        if(eny<=y[i].first){ }
                        else{
                            maxx++;
                        }
                    }
                    else if(sty>=y[i].first){
                        //cout << "ch1.3***";
                        if(sty>=y[i].second){ }
                        else{
                            maxx++;
                        }
                    }
                }
            }
            else if(stx>=x[i].first){
                //cout << "ch2...";
                if(stx>=x[i].second){ }
                else{
                    //cout << "ch2.1***";
                    if(sty<y[i].first){
                        //cout << "ch2.2***";
                        if(eny<=y[i].first){ }
                        else{
                            maxx++;
                        }
                    }
                    else if(sty>=y[i].first){
                        //cout << "ch2.3***";
                        if(sty>=y[i].second){ }
                        else{
                            maxx++;
                        }
                    }
                }
            }
        }
        cout << maxx << endl;
    }
}
