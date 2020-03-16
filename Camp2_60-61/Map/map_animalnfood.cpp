#include<bits/stdc++.h>
using namespace std;
map<string,string> mapp;
int main(){
    int N;
    scanf("%d",&N);
    for(int o=0;o<N;o++){
        string a,b;
        cin >> a >> b;
        mapp.insert({a,b});
    }
    scanf("%d",&N);
    for(int o=0;o<N;o++){
        string a,b;
        cin >> a ;
        cout << mapp[a] << endl;
    }
}
