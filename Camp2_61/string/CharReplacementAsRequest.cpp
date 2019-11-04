#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,check;
    getline(cin,a);
    char att,change;
    cin >> att >> change;
    cin >> check;
    int ch=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==att){
            if(check[ch]=='Y'){
                a[i] = change;
            }
            ch++;
        }
    }
    cout << a;
}

