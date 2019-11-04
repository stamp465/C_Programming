#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    double score[N]={0};
    double avg = 0;
    for(int i=0;i<N;i++)
    {
        cin >> score[i];
        avg += score[i]/N;
    }
    printf("avg = %.2f\n",avg);
    double sd = 0;
    for(int i=0;i<N;i++)
    {
        sd += (score[i]-avg)*(score[i]-avg);
    }
    sd /= N-1;
    sd = sqrt(sd);
    printf("S.D. = %.2f\n",sd);
}

