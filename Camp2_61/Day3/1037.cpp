#include<bits/stdc++.h>
using namespace std;
int minn = 1000000;
bool canwalk(int i,int j,char f[][100],int x,int y)
{
    if(i<0||i>=x||j<0||j>=y)    return false;
    if(f[i][j]=='X')    return false;
    if(f[i][j]=='q')    return false;
    if(f[i][j]=='*')    return false;
    //cout << f[i-1][j] <<  f[i+1][j] <<  f[i][j-1] << f[i][j+1] << endl;
    return true;
}

int walk(int countt,char f[][100],int x,int y,int savei,int savej,int checkwalk[][100])
{
    checkwalk[savei][savej] = 1;
    if(countt!=0){
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            if(f[i][j]=='q')    f[i][j] = '*';
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            if(f[i][j]=='*')
                for(int a=-1;a<=1;a++)
                    for(int b=-1;b<=1;b++)
                        if(i+a>=0&&i+a<x&&j+b>=0&&j+b<y)
                            if(f[a+i][j+b]!='X'&&f[a+i][j+b]!='D'&&f[a+i][j+b]!='*')    f[a+i][j+b] = 'q';
    }

    if(f[savei][savej]=='D'){
        if(countt<minn) minn = countt;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
        {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
        {
            cout << checkwalk[i][j] << " ";
        }
        cout << endl;
    }
    cout << savei << savej << endl;
    if(canwalk(savei-1,savej,f,x,y)&&checkwalk[savei-1][savej]==0){
        walk(countt+1,f,x,y,savei-1,savej,checkwalk);
    }
    if(canwalk(savei+1,savej,f,x,y)&&checkwalk[savei+1][savej]==0){
        walk(countt+1,f,x,y,savei+1,savej,checkwalk);
    }
    if(canwalk(savei,savej-1,f,x,y)&&checkwalk[savei][savej-1]==0){
        walk(countt+1,f,x,y,savei,savej-1,checkwalk);
    }
    if(canwalk(savei,savej+1,f,x,y)&&checkwalk[savei][savej+1]==0){
        walk(countt+1,f,x,y,savei,savej+1,checkwalk);
    }
}

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
    /*for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
        {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }*/
    walk(0,f,x,y,savei,savej,checkwalk);
    cout << minn;
}
