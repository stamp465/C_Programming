#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[5][10];
    int maxx=0;
    for(int i=0;i<5;i++)
    {
        cin >> name[i];
    }
    for(int i=0;i<5;i++)
    {
        if(strcmp(name[i],name[maxx])>0){}
        else{
            maxx = i;
        }
    }
    cout << name[maxx];
}
