#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    char att,change;
    cin >> att >> change;
    for(int i=0;i<a.size();i++){
        if(a[i]==att){
            a[i] = change;
            break;
        }
    }
    cout << a;
}
