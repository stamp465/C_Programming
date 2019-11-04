#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    vector<int> a1,b1;
    cin >> a;
    cin >> b;
    if(a.size()!=b.size()){
        cout << "different length\n";
        return 0;
    }
    int check=0;
    for(int i=1;i<a.size();i++)
    {
        a1.push_back((int)a[i]-(int)a[i-1]);
        b1.push_back((int)b[i]-(int)b[i-1]);
        if((int)a[i]-(int)a[i-1]!=(int)b[i]-(int)b[i-1])    check = 1;
    }
    if(check==0)    cout << "similarity" << endl;
    else            cout << "difference" << endl;
    for(int i=0;i<a1.size();i++)    cout << a1[i] << " ";
    cout << endl;
    if(check==1)    for(int i=0;i<b1.size();i++)    cout << b1[i] << " ";

}
