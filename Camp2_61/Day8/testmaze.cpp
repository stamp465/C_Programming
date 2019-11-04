
#include<bits/stdc++.h>
using namespace std;
int a[4]={1,-1,0,0};
int b[4]={0,0,1,-1};
int minn = 1000000;
int main()
{
    int savei,savej,x,y;
    cin >> x >> y;
    char f[100][100];
    int checkwalk[100][100]={0};
    for(int i=0;i<x;i++){
        scanf("%s",f[i]);
        for(int j=0;j<y;j++)
        {
            if(f[i][j]=='S')  {
                savei = i;
                savej = j;
            }
        }
    }
    int countt = 0;
    while(1)
    {
        //cout << countt << endl;
        int findS=0;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(f[i][j]=='S')
                {
                    f[i][j] = '.';
                    findS=1;
                    for(int k=0;k<4;k++)
                    {
                        int aa = a[k],bb = b[k];
                        if(i+aa>=0&&i+aa<x&&j+bb>=0&&j+bb<y)
                        {
                            if(f[aa+i][j+bb]=='D') {
                                countt++;
                                cout << countt;
                                return 0;
                            }
                            if(f[aa+i][j+bb]!='X'&&f[aa+i][j+bb]!='q'&&f[aa+i][j+bb]!='*')    f[aa+i][j+bb] = 's';
                        }
                    }
                }
            }
        }
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                if(f[i][j]=='s')    f[i][j] = 'S';

        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                if(f[i][j]=='q')    f[i][j] = '*';
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                if(f[i][j]=='*'){
                    for(int k=0;k<4;k++){
                    int aa = a[k],bb = b[k];
                    if(i+aa>=0&&i+aa<x&&j+bb>=0&&j+bb<y)
                        if(f[aa+i][j+bb]!='X'&&f[aa+i][j+bb]!='D'&&f[aa+i][j+bb]!='*')    f[aa+i][j+bb] = 'q';
                    }
                }
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++)
            {
                cout << f[i][j] ;
            }
            cout << endl;
        }
        cout << endl;
        countt++;
        if(findS==0)    break;

    }
    cout << "KAKTUS";

}


