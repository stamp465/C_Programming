#include<bits/stdc++.h>
using namespace std;
long int x[200000],y[200000],r[200000];
int main()
{
    long int N,maxx = 0;
    scanf("%ld",&N);

    //int countt[N] = {0};
    for(int i=0;i<N;i++){
        scanf("%ld %ld %ld",&x[i],&y[i],&r[i]);
        //cout << stx << endl;

    }
    for(int i=0;i<N;i++){
        int countt = 0;
        for(int j=0;j<N;j++){
            if(i!=j)
            if(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j]))  <  ((r[i]+r[j])*(r[i]+r[j])))
            {
                countt++;
            }
        }
        if(countt > maxx) maxx = countt;
    }
    cout << maxx+1;
}
