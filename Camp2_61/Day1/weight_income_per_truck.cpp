#include<bits/stdc++.h>
using namespace std;
int main()
{
    int price = 0,sum=0;
    while(1)
    {
        int N;
        cin >> N;
        //sum += N;
        if(sum+N>1000)    break;
        else sum+=N;
        if(N<=1){
            price += 50;
        }
        else if(N>1&&N<=10){
            price += 50+(N-1)*40;
        }
        else if(N>10){
            price += N*30;
        }
    }
    cout << sum << " " << price;
}
