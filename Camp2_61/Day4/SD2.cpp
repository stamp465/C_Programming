#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin >> N >> M;
    double score[N][M];
    double avg = 0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin >> score[i][j];
            avg += score[i][j]/N/M;
        }
    }
    printf("avg = %.2f\n",avg);
    double sd = 0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            sd += (score[i][j]-avg)*(score[i][j]-avg);
    }
    sd /= N*M-1;
    sd = sqrt(sd);
    printf("S.D. = %.2f\n",sd);
}


