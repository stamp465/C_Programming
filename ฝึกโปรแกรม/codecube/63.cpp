#include<cstdio>
#include<iostream>
using namespace std;
char arr[1010][1010];
int main()
{
    int M,N,count=0;
    scanf("%d %d",&M,&N);
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]=='A')  count++;
        }
    }
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(arr[i][j]=='+')
            {
                arr[i][j] = '.';
                if(arr[i-1][j]=='A')
                {
                    arr[i-1][j]='.';
                    count--;
                }
                if(arr[i+1][j]=='A')
                {
                    arr[i+1][j]='.';
                    count--;
                }
                if(arr[i][j-1]=='A')
                {
                    arr[i][j-1]='.';
                    count--;
                }
                if(arr[i][j+1]=='A')
                {
                    arr[i][j+1]='.';
                    count--;
                }
            }
            if(arr[i][j]=='x')
            {
                arr[i][j]= '.';
                if(arr[i-1][j-1]=='A')
                {
                    arr[i-1][j-1]='.';
                    count--;
                }
                if(arr[i-2][j-2]=='A')
                {
                    arr[i-2][j-2]='.';
                    count--;
                }
                if(arr[i-1][j+1]=='A')
                {
                    arr[i-1][j+1]='.';
                    count--;
                }
                if(arr[i-2][j+2]=='A')
                {
                    arr[i-2][j+2]='.';
                    count--;
                }
                if(arr[i+1][j-1]=='A')
                {
                    arr[i+1][j-1]='.';
                    count--;
                }
                if(arr[i+2][j-2]=='A')
                {
                    arr[i+2][j-2]='.';
                    count--;
                }
                if(arr[i+1][j+1]=='A')
                {
                    arr[i+1][j+1]='.';
                    count--;
                }
                if(arr[i+2][j+2]=='A')
                {
                    arr[i+2][j+2]='.';
                    count--;
                }
            }
        }
    }
    printf("%d\n",count);
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }

}
