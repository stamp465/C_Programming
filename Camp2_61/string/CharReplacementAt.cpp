#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,check;
    getline(cin,a);
    char att,change;
    cin >> att >> change;
    int want;
    cin >> want;
    int ch=1;
    for(int i=0;i<a.size();i++){
        if(a[i]==att){
            if(ch==want){
                a[i] = change;
                break;
            }
            ch++;
        }
    }
    cout << a;
}


