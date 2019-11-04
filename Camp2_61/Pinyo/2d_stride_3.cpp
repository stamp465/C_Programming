#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K;
    cin >> N >> K;
    int n;
    cin >> n;
    while(n--){
        int x,y;
        cin >> x >> y;
        x--;    y--;
        //cout << x << y << endl;
        int check = 0;
        if(K!=0){
            if((x/K)%2==1){
                check = 1;
            }
        }

        if(check==0){
            int starti = N-x+1;
            //cout << x << "...";
            if(starti>N)    starti=1;
            //cout << starti << "..";
            int enddj = starti+y;
            enddj %= N;
            if(enddj==0)    enddj = N;
            enddj %= 10;
            cout << enddj << endl;
        }
        else{
            int starti = x+1;
            //cout << x << "...";
            if(starti>N)    starti=1;
            //cout << starti << "..";
            int enddj = starti+N-y;
            enddj %= N;
            if(enddj==0)    enddj = N;
            enddj %= 10;
            cout << enddj << endl;
        }
    }
}


