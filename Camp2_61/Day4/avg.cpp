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
    for(int i=0;i<N;i++)
    {
        if(score[i]>avg){
            printf("people %d score = %.2f it > avg\n",i+1,score[i]);
        }
        else if(score[i]==avg){
            printf("people %d score = %.2f it == avg\n",i+1,score[i]);
        }
        else{
            printf("people %d score = %.2f it < avg\n",i+1,score[i]);
        }
    }
}
