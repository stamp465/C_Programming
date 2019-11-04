#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str;
    string com;
    int N,M,count=0;
    scanf("%d %d",&N,&M);
    cin >> str ;
    cin >> com;
    for(int i=0;i<N-2;i++)
    {
        if(str.compare(i,M,com)==0)
        {
            count++;
        }
    }
    printf("%d",count);


}
