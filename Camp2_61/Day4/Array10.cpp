#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int a1,i=0;
    cout << "Number > ";
    cin >> a1;
    vector<int> b1;
    vector<int>::iterator it;
    while(b1.size()!=a1)
    {
        int num =1+rand()%a1;
        int check=0;
        for(int i=0;i<b1.size();i++)
            if(b1[i]==num) {
                check = 1;
                break;
            }
        if(check==1)    continue;
        b1.push_back(num);
    }
    for(i=0;i<b1.size();i++)
    {
        printf("%2d ",b1[i]);
        if(i%20==19&&i>=19)  printf("\n");
    }

}

