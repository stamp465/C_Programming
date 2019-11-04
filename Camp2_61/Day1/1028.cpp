#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<char,int> pairr[26];
    while(1){
        string a;
        cin >> a;
        if(a[0]=='!'){
            cout << "!" << endl;
            break;
        }
        if(a[0]=='='){
            string key;
            int value;
            cin >> key >> value;
            pairr[int(key[0])-65]  = make_pair(key[0],value);
        }
        if(a[0]=='#'){
            string key;
            cin >> key;
            cout << pairr[int(key[0])-65].second << endl;
        }
        if(a[0]=='+'){
            string key1,key2;
            cin >> key1 >> key2;
            pairr[int(key1[0])-65].second += pairr[int(key2[0])-65].second;
        }
        if(a[0]=='-'){
            string key1,key2;
            cin >> key1 >> key2;
            pairr[int(key1[0])-65].second -= pairr[int(key2[0])-65].second;
        }
        if(a[0]=='*'){
            string key1,key2;
            cin >> key1 >> key2;
            pairr[int(key1[0])-65].second *= pairr[int(key2[0])-65].second;
        }
        if(a[0]=='/'){
            string key1,key2;
            cin >> key1 >> key2;
            pairr[int(key1[0])-65].second /= pairr[int(key2[0])-65].second;
        }
    }
}
