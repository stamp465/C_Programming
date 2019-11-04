#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
unordered_map<int,int>   mapp(499999);
int main()
{
    int N,num,K;
    scanf("%d %d %d",&N,&num,&K);
    while(N--){
        int phone;
        int vote;
        scanf("%d %d",&phone,&vote);
        if(mapp.find(phone)==mapp.end()){
            mapp[phone] = 1;
            arr[vote]++;
            continue;
        }
        if(vote<=0||vote>num){
            mapp.at(phone)++;
        }
        else{
            mapp.at(phone)++;
            if(mapp.at(phone)<=K)     arr[vote]++;
        }
    }
    for(int i=1;i<=num;i++) printf("%d\n",arr[i]);
}
