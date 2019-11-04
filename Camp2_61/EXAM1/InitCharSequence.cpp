#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string m;
    int con,coon;
    cin >> m;
    for(int i=2;i<21;i++)
    {
        if(i>m.length())
            break;
        string check;
        coon=0;
        check = m.substr(0,i);
        for(int k=0;k<i;k++)
            {
                con = 0;
            for(int j=i;j<i+i;j++)
            {
                //cout << m[k+j] << "." << check[k] << endl;
                if(m[j]==check[k])
                {
                    con++;
                }
            }
            if(con==1)
            {
                coon++;
            }
        }
        if(coon==check.length())
        {
            cout << check;
            break;
        }

    }
}
