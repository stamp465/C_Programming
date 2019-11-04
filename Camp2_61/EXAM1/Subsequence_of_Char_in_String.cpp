#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int N;
    cin >> a;
    cin >> N;
    while(N--)
    {
        int j=0;
        string check,ch;
        cin >> ch;
        for(int i=0;i<ch.size();i++){
            if(ch[i]==a[j])
            {
                check.push_back(ch[i]);
                if(j<a.size())  j++;
            }
        }
        if(check==a)    cout << "yes\n";
        else            cout << "no\n";
    }
}
