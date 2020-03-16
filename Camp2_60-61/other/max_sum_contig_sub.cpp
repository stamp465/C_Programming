#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    scanf("%d",&N);
    int maxx=0,sum=0;
    for(int i=0;i<N;i++){
        int a;
        scanf("%d",&a);
        sum+=a;
        if(sum<0)   sum=0;
        if(sum>maxx)    maxx = sum;
    }
    printf("%d",maxx);
}
