#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int sum=0;
    for(int i=0;i<a.size()-1;i++){
        if((int)a[i]<65) sum += (int)a[i] - 48;
        else{
            sum += (int)a[i] - 64;
        }
        //cout << sum << " ";
    }
    int x = sum;
    sum %= 11;
    int check = 0;
    if(sum<=1){
        if((int)a[a.size()-1]-48==1-sum){
            printf("T %d",x);
        }
        else{
            printf("F %d",x);
        }
    }
    if(sum>1){
        if((int)a[a.size()-1]-48==11-sum){
            printf("T %d",x);
        }
        else{
            printf("F %d",x);
        }
    }
}
