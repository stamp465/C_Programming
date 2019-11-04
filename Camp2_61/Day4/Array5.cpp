#include<bits/stdc++.h>
using namespace std;

int main()
{
    string mas,tar;
    cin >> mas >> tar;
    int countt=0;
    for(int i=0;i<tar.size()+1-mas.size();i++)
    {
        if((tar.compare(i,mas.size(),mas)) == 0)    {
                countt++;
        }
    }
    cout << "same = " << countt;
}


