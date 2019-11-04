#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int main(){
    int N,K,maxx=0,sum=0,savest=0,savegoon=0;
    scanf("%d %d",&N,&K);
    int longg = K*2+1,j=0;
    for(int i=0;i<N;i++){
        int num;
        scanf("%d",&num);
        q.push(num);
        sum += num;
        if(q.size()==longg){
            //printf("%d..",sum);
            if(sum>maxx)    maxx = sum;
            sum -= q.front();
            q.pop();
        }
    }
    printf("%d",maxx);
}
