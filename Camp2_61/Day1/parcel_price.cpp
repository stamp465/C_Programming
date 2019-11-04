#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,price=0;
    cin >> N;
    if(N<=1){
        price = 50;
    }
    else if(N>1&&N<=10){
        price = 50+(N-1)*40;
    }
    else if(N>10){
        price = N*30;
    }
    cout << price;
}
