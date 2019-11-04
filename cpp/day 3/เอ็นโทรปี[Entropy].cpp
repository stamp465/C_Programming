#include<bits/stdc++.h>
double a[1000],i=0,sum=0;
using namespace std;
int main()
{

    string x;
    while(1)
    {
        cin >> x ;
        if(x=="Q")break;
        if(x=="A"){a[1]++;}
        if(x=="B"){a[2]++;}
        if(x=="B+"){a[3]++;}
        if(x=="C"){a[4]++;}
        if(x=="C+"){a[5]++;}
        if(x=="D"){a[6]++;}
        if(x=="D+"){a[7]++;}
        if(x=="F"){a[8]++;}
        i++;
    }
    for(int j=1;j<=8;j++)
    {
        if(a[j]>0)
        {
            sum+=a[j]/i*log2(a[j]/i);

        }
    }
    cout << -sum ;
}
