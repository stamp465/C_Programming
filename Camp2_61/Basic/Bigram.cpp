#include<bits/stdc++.h>
using namespace std;
string a;
int countt[4];
int main(){
    string ch[4]={"00","01","10","11"};
    while(1){
        string in;
        cin >> in;
        if(in=="0"||in=="1"){
            if(a.size()!=2){
                a.push_back(in[0]);
                if(a.size()==2){
                    //cout << a << endl;
                    for(int i=0;i<4;i++){
                        if(a==ch[i])    countt[i]++;
                    }
                }
            }
            else{
                a.erase(a.begin());
                a.push_back(in[0]);
                //cout << a << endl;
                for(int i=0;i<4;i++){
                    if(a==ch[i])    countt[i]++;
                }
            }
        }
        else break;
    }
    for(int i=0;i<4;i++){
        cout << countt[i] << endl;
    }
}
