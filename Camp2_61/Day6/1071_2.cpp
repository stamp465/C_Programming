#include<bits/stdc++.h>
using namespace std;
int x[10000];
int y[10000];
bool ch[1000][1000];
int main()
{
    int N,M,cN=0;
    cin >> N >> M;
    for(int i=0;i<N;i++)
    {
        int ax,ay;
        cin >> ax >> ay;
        x[ax]++;
        y[ay]++;
        ch[ax][ay] = 1;
        cN++;
    }
    for(int k=0;k<M;k++)
    {
        int a,b,r,countt=0;
        cin >> a >> b >> r;
        if(cN==0)   printf("%d\n",0);
        else{
        int i,ei,j,ej;
        i=a-r,j=b-r,ei=a+r,ej=b+r;
        if(i<0) i=0;
        if(j<0) j=0;
        if(ei>1000) ei=1000;
        if(ej>1000) ej=1000;
        for(int aa = i;aa<=ei;aa++)
        {
            for(int bb = j;bb<=ej;bb++)
            {
                if(x[aa]!=0&&y[bb]!=0&&ch[aa][bb]==1){
                    //cout << aa << " " << bb << " ";
                    //cout << x[aa] << " " << y[bb] << endl;
                    countt++;
                    ch[aa][bb] = 0;
                    x[aa]--;
                    y[bb]--;
                    cN--;
                }
            }
        }
        printf("%d\n",countt);
        }
    }
}
