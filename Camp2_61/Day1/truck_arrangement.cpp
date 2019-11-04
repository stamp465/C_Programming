#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hoho=0;
    while(1)
    {
        int N,sent=0;
        cin >> N;
        if(N<0)
        {
            break;
        }
        else{
            sent = N/1000;
            N %=1000;
            hoho+=N;
            if(hoho>500) {
                sent ++;
                hoho = 0;
            }
        }
        cout << sent << endl;
    }
}

