#include<bits/stdc++.h>
using namespace std;
set<int> sett;
set<int>::iterator it;
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int b,num;
        scanf("%d %d",&b,&num);
        if(b==1){
            sett.insert(num);
        }
        if(b==2){
            it = sett.upper_bound(num);
            int dis = distance(sett.begin(), it);
            printf("%d\n",dis);
        }
    }
}
