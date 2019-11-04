#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int a1 = 1+rand()%20;
    int a2 = 1+rand()%20;
    set<int> b1,b2;
    set<int>::iterator it,it2;
    while(b1.size()!=a1)
    {
        int num =1+rand()%100;
        b1.insert(num);
    }
    for(it = b1.begin();it!=b1.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    while(b2.size()!=a2)
    {
        int num =1+rand()%100;
        b2.insert(num);
    }
    int countt = 0;
    for(it = b2.begin();it!=b2.end();it++)
    {
        cout << *it << " ";
        for(it2 = b1.begin();it2!=b1.end();it2++)
        {
            if(*it==*it2)   countt++;
        }
    }
    cout << "\n" << "same = " << countt;
}
