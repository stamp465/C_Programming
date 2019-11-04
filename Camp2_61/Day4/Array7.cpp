#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    double M,avg=0,sd=0,la=0,ha=0,ma=0,maxx=0,minn=1000000;
    cin >> N >> M;
    double score[N];
    for(int i=0;i<N;i++)
    {
        cin >> score[i];
        if(score[i]==M) ma++;
        if(score[i]>maxx)   maxx = score[i];
        if(score[i]<minn)   minn = score[i];
        avg += score[i]/N;
    }
    for(int i=0;i<N;i++)
    {
        if(score[i]<avg)    la++;
        else                ha++;
        sd += (score[i]-avg)*(score[i]-avg);
    }
    printf("Avg = %.2f      S.D. = %.2f\n",avg,sd);
    printf("High = %.2f     Low = %.2f\n",maxx,minn);
    printf("Student<Avg = %.0f  Student>=Avg = %.0f  Student=Max = %.0f\n",la,ha,ma);
}


