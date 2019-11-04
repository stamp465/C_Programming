#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int a1,i=0;
    cout << "Number > ";
    cin >> a1;
    vector<int> b1,b2;
    while(b1.size()!=a1&&b2.size()!=a1)
    {
        int num1 =1+rand()%(2*a1);
        int num2 =1+rand()%(2*a1);
        b1.push_back(num1);
        b2.push_back(num2);
    }
    cout << "[0]" << endl;
    sort(b1.begin(),b1.end());
    reverse(b1.begin(),b1.end());
    for(i=0;i<b1.size();i++)
    {
        printf("%2d ",b1[i]);
        if(i%10==9&&i>=9)  printf("\n");
    }
    cout << "\n[1]" << endl;
    sort(b2.begin(),b2.end());
    reverse(b2.begin(),b2.end());
    for(i=0;i<b2.size();i++)
    {
        printf("%2d ",b2[i]);
        if(i%10==9&&i>=9)  printf("\n");
    }
    set<int> b3;
    set<int>::iterator it;
    for(i=0;i<b2.size();i++)
    {
        for(int j=0;j<b1.size();j++)
        {
            if(b2[i]==b1[j])    b3.insert(b2[i]);
        }
    }
    cout << "\n[NEW]" << endl;
    for(it=b3.begin();it!=b3.end();it++)
    {
        cout << *it << " ";
    }
}


