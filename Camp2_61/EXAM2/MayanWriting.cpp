#include<bits/stdc++.h>
using namespace std;

int main()
{
    int countt=0;
    string a,b;
    cin >> a >> b;
    //int sizee=a.size();
    for(int i=0;i<=b.size()-a.size();i++)
    {
        int check = 0,chakk[1100]={0};
        int found = a.find(b[i]);
        if (found!=string::npos){
        vector<char> ch;
        for(int j=0;j<a.size();j++){
            for(int k=0;k<a.size();k++){
                if(b[i+j]==a[k]&&chakk[k]!=1){
                    ch.push_back(a[k]);
                    chakk[k] = 1;
                    break;
                }
            }
        }
        /*for(int i=0;i<ch.size();i++){
            cout << ch[i] << " ";
        }
        cout << endl;*/
        if(ch.size()!=a.size()) check=1;
        if(check==0)    countt++;

        }
    }
    cout << countt;
}
