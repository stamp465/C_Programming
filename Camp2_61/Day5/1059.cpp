#include<bits/stdc++.h>
using namespace std;
int chnum[3][3] =   { {1,2,3},{4,5,6},{7,8,9} };
int num[10][4]  =   {   {-1,-1,-1,-1},
                        {0,0,0,0},      {65,66,67,-1},      {68,69,70,-1},
                        {71,72,73,-1},  {74,75,76,-1},      {77,78,79,-1},
                        {80,81,82,83},  {84,85,86,-1},      {87,88,89,90} };
int main()
{
    int N;
    cin >> N;
    N--;
    int start,go,savei,savej;
    cin >> start >> go;
    string word;
    int i=-1;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(chnum[i][j]==start)
            {
                savei=i;
                savej=j;
            }
    while(go--)
    {
        i++;
        if(i>=4) i=0;
        if(num[start][i]==-1)   i = 0;
        //cout << char(num[start][i]);
    }
    if(num[start][i]==0){
        if(word.size()!=0){
            word.pop_back();
        }
    }
    else    word.push_back(char(num[start][i]));
    while(N--)
    {
        int j,i,go;
        cin >> j >> i >> go;
        savei += i;
        savej += j;
        int c=-1;
        if(num[chnum[savei][savej]][0]==0){
            //cout << "0";
            while(go--)
            {
                if(word.size()!=0)
                    word.pop_back();
            }
        }
        else{
            while(go--)
            {
                c++;
                if(c>=4) c=0;
                if(num[chnum[savei][savej]][c]==-1)   c = 0;
                //cout << char(num[start][i]);
            }
            word.push_back(num[chnum[savei][savej]][c]);
        }
    }
    if(word.size()==0)  cout << "null";
    else    cout << word;

}
