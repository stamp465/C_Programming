#include<bits/stdc++.h>
using namespace std;
int main()
{
    double N,in=0;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        double a,b;
        cin >> a >> b;
        double d = sqrt(a*a+b*b);
        if(d<=1)    in++;
    }
    double out = in/N;
    printf("%.3f",out);

}

