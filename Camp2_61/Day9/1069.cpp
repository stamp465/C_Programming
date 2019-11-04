#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> stak;
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        char a;
        cin>> a;
        if(stak.empty()){
            stak.push(a);
        }
        else{
            if(stak.top()==a)   stak.pop();
            else    stak.push(a);
        }
    }
    if(stak.empty())    {
        cout << "0\nempty";
        return 0;
    }
    cout << stak.size() << endl;
    while(!stak.empty()){
        cout << stak.top();
        stak.pop();
    }
}
