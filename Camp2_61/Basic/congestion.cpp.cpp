#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Threshold,M,Timeout;
    cin >> Timeout  >> M >> Threshold;
    cout << M << endl;
    int save=0,show=M;
    while(1)
    {
        int N;
        cin >> N;
        if(N-save>Timeout )
        {
            Threshold/=2;
            show=M;
        }
        else{
            if(N<save)  break;
            else{
                if(show>=Threshold)
                {
                    show += M;
                }
                else{
                    show *= 2;
                }
            }
        }
        save = N;
        cout << show << endl;
    }
}
