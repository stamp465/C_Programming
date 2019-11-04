#include<bits/stdc++.h>
using namespace std;

int flor[30000];
int main()
{
    int N,K;
    cin >> N >> K;
    while(K--){
        int has;
        cin >> has;
        flor[has]++;
    }
    int L;
    cin >> L;
    while(L--){
        int st,en;
        cin >> st >> en;
        int savestart=-1;
        for(int i=st;i<=N;i++){
            if(flor[i]!=0){
                savestart = i;
                break;
            }
        }
        for(int i=st;i>0;i--){
            if(flor[i]!=0){
                if(savestart!=-1){
                    //cout << savestart << " ... " << st << endl;
                    if(st-i < savestart-st)    savestart = i;
                }
                else{
                    savestart = i;
                }
                break;
            }
        }
        cout << savestart << endl;
        flor[savestart]--;
        flor[en]++;
    }
}
