#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a ;
    int i,j=0,k=0;
    for(i=1;i<100;i++)
    {
        if(a[i]>='65'&&a[i]<='90'){j++;}
        if(a[i]>='97'&&a[i]<='122'){k++;}
    }
    if(j>0&&k>0)printf("Mix");
    if(j==0&&k>0)printf("All Small Letter");
    if(j>0&&k==0)printf("All Capital Letter");

}
