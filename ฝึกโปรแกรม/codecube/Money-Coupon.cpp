#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
vector<long long int> pluss;
vector<long long int> mul;
vector<long long int> mul0;
vector<long long int> minuss;
int main(){
    long long int n,y;
    cin >> n;
    char scan;
    for(int i=0;i<n;i++) {
        cin >> scan >> y;
        if(scan == '+') pluss.push_back(y);
        else if (scan == 'x' && y!=0 ) mul.push_back(y);
        else if (scan == 'x' && y==0 ) mul0.push_back(y);
        else minuss.push_back(y);
    }
    sort(minuss.begin(),minuss.end());
    sort(pluss.begin(),pluss.end(),greater<int>());
    long long int money,sum=0;
    for(auto &it : pluss)sum+= it;
    for(auto &it : mul){  sum*= it;}
    if(mul0.size()==0){
            for(auto &it : minuss){sum-=it;}
    }
    cout << sum;

}
