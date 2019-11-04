#include<bits/stdc++.h>
using namespace std;
int power(int base,int poww){
    if(poww==0) return 1;
    int a = base;
    poww--;
    if(poww>0){
        while(poww--){
            base = base*a;
        }
    }
    return base;
}
int to10(string n,int base)
{
    int sum = 0;
    while(n.size()!=0){
        int a = (int)n[0] - 48;
        if(a>=10){
            a-=39;
        }
        sum += a*power(base,n.size()-1);
        n.erase(n.begin());
    }
    //cout << sum;
    return sum;
}
string gotobase(int num,int base){
    stack<int> cse;
    while(num>0){
        cse.push(num%base);
        num /= base;
        //cout << num << endl;
    }
    //cse.push(num);
    string ans;
    while(!cse.empty()){
        int a = cse.top();
        cse.pop();
        if(a>=10)   a+=48+39;
        else        a+=48;
        ans.push_back(char(a));
    }
    return ans;
}
int main()
{
    while(1){
        string n;
        int s,d;
        cin >> n >> s >> d;
        if(n=="0"&&s==0&&d==0)   break;
        int num = to10(n,s);
        string a = gotobase(num,d);
        cout << a << endl;
    }
}
/*
254 10 16
a4 16 2
14 10 8
101111110000011 2 8
7105 8 16
0 0 0
*/
