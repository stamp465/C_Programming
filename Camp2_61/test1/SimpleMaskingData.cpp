#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//using namespace std;
char k[1200];
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf(" %[^\n]s",&k);
    //getline(cin,k);
    //printf("%s",k);
    //printf("%d", strlen(k));
    int lon = strlen(k);
    lon /= N;
    if(strlen(k)%N!=0)
    {
        lon++;
    }
    //printf("%d",lon);
    if(strlen(k)<lon*N)
    {
        for(int i=strlen(k);i<lon*N;i++)
        {
            k[i] = ' ';
        }
    }
    int bang=0;
    for(int i=0;i<lon;i++)
    {
        char w[N];
        for(int i=0;i<N;i++)
        {
            w[i] = k[bang+i];
            //printf("%c",w[i]);
        }
        //printf("_");
        for(int j=0;j<N;j++)
        {
            printf("%c",w[arr[j]-1]);
        }
        bang += N;
    }
}
