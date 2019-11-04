#include <bits/stdc++.h>
using namespace std;
int an=0;
int x,y,z,r=0;
int a[5][5];
void del(int i,int j)
{
    int h=a[i][j];
    r=1;
    a[i][j]=0;
    an+=5;
    if(h==a[i+1][j]&&i+1<x)del(i+1,j);
    if(h==a[i-1][j]&&i-1>=0)del(i-1,j);
    if(h==a[i][j+1]&&j+1<y)del(i,j+1);
    if(h==a[i][j-1]&&j-1>=0)del(i,j-1);
}
int main()
{
    cin >> x >> y;
    char t;
    for(int  i = 0 ;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin >> t;
            if(t=='#')a[i][j]=1;
            if(t>=65)a[i][j]=t;
        }
    }
    cin >> z;
    int p1,p2;
    char s;
    for(int i=1;i<=z;i++)
    {
        int h=0;
        cin >> p1 >> p2 >> s;
        if(a[p1][p2]==1||a[p1][p2]==0)
        {
            an-=5;
            continue;
        }
        else
        {
            if(s=='R')
            {
                if(p2+1>=y)
                {
                    an-=5;
                    continue;
                }
                else if(a[p1][p2+1]!=0)
                {
                    an-=5;
                    continue;
                }
                a[p1][p2+1]=a[p1][p2];
                a[p1][p2]=0;
                p2++;
                while(p1+1<x)
                {
                    if(a[p1+1][p2]!=0)
                    {
                        break;
                    }
                    else
                    {
                        a[p1+1][p2]=a[p1][p2];
                        a[p1][p2]=0;
                        p1++;
                    }
                }
                if(a[p1][p2]==a[p1-1][p2])
                {
                    h++;
                    an+=5;
                    a[p1-1][p2]=0;
                }
                if(a[p1][p2]==a[p1+1][p2])
                {
                    h++;
                    an+=5;
                    a[p1+1][p2]=0;
                }
                if(a[p1][p2]==a[p1][p2-1])
                {
                    h++;
                    an+=5;
                    a[p1][p2-1]=0;
                }
                if(a[p1][p2]==a[p1][p2+1])
                {
                    h++;
                    an+=5;
                    a[p1][p2+1]=0;
                }
                if(h>0)
                {
                    a[p1][p2]=0;
                    an+=5;
                }
            }
            else if(s=='L')
            {
                if(p2-1<0)
                {
                    an-=5;
                    continue;
                }
                else if(a[p1][p2-1]!=0)
                {
                    an-=5;
                    continue;
                }
                a[p1][p2-1]=a[p1][p2];
                a[p1][p2]=0;
                p2--;
                while(p1+1<x)
                {
                    if(a[p1+1][p2]!=0)
                    {

                        break;
                    }
                    else
                    {
                        a[p1+1][p2]=a[p1][p2];
                        a[p1][p2]=0;
                        p1++;
                    }
                }
                if(a[p1][p2]==a[p1-1][p2])
                {
                    h++;
                    an+=5;
                    a[p1-1][p2]=0;
                }
                if(a[p1][p2]==a[p1+1][p2])
                {
                    h++;
                    an+=5;
                    a[p1+1][p2]=0;
                }
                if(a[p1][p2]==a[p1][p2-1])
                {
                    h++;
                    an+=5;
                    a[p1][p2-1]=0;
                }
                if(a[p1][p2]==a[p1][p2+1])
                {
                    h++;
                    an+=5;
                    a[p1][p2+1]=0;
                }
                if(h>0)
                {
                    a[p1][p2]=0;
                    an+=5;
                }
            }
            int w=1;
            while(1)
            {
                r=0;
                for(int j=x-2;j>=0;j--)
                {
                    for(int k=y-1;k>=0;k--)
                    {
                        if(a[j][k]>=65)
                        {
                            if(a[j+1][k]==0)
                            {
                                p1=j;
                                p2=k;
                                while(p1+1<x)
                                {
                                    if(a[p1+1][p2]!=0)
                                    {
                                    break;
                                    }
                                    else
                                    {
                                    a[p1+1][p2]=a[p1][p2];
                                    a[p1][p2]=0;
                                    p1++;
                                    }
                                }
                            }
                        }
                    }
                }
                for(int j=0;j<x;j++)
                {
                    for(int k=0;k<y;k++)
                    {
                        if(a[j][k]>=65)
                        {
                            int o=0;
                            if(a[j][k]==a[j+1][k]&&i+1<x)o++;
                            if(a[j][k]==a[j-1][k]&&i-1>=0)o++;
                            if(a[j][k]==a[j][k+1]&&j+1<y)o++;
                            if(a[j][k]==a[j][k-1]&&j-1>=0)o++;
                            if(o>0)del(j,k);
                        }
                    }
                }
                if(r==0)break;
            }

        }
    }
    cout << an << endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(a[i][j]==1)
            cout << '#' << ' ';
            else if(a[i][j]==0)
            cout << '-' << ' ';
            else printf("%c ",a[i][j]);
        }

        cout << endl;
    }
}
