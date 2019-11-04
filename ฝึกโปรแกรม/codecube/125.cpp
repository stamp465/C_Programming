#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string name;
int main()
{
    int N,count=0;
    scanf("%d",&N);
    cin >> name;
    int n = 0;
    while(n!=-1){
        string str1 = "oooooooo";
        n = name.find("SPACEBAR");
        if(n==-1)   break;
        else        name.replace(n,8,str1);
        count++;
    }
    n=0;
    while(n!=-1){
        string str1 = "ooooo";
        n = name.find("SHIFT");
        if(n==-1)   break;
        else        name.replace(n,5,str1);
        count++;
    }
    for(int i=0;i<N;i++)
    {
        if(name[i]=='Q')
        {
            count++;
        }
        else if(name[i]=='W')
        {
            count++;
        }
        else if(name[i]=='E')
        {
            count++;
        }
        else if(name[i]=='A')
        {
            count++;
        }
        else if(name[i]=='S')
        {
            count++;
        }
        else if(name[i]=='D')
        {
            count++;
        }
        else if(name[i]=='V')
        {
            count++;
        }
    }
    cout << count;

}
