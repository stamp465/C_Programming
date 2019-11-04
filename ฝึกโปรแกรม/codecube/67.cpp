#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int save[1001];
int main()
{
    string str;
    int count=0;
    cin >> str;
    for(int i=0;i<str.length();i++)
    {
        if(str.compare(i,1,"S")==0)
        {
            if(str.compare(i+1,1,"I")==0)
            {
                if(str.compare(i+2,1,"P")==0)
                {
                    if(str.compare(i+3,1,"A")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                    if(str.compare(i+3,1,"a")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                }
                if(str.compare(i+2,1,"p")==0)
                {
                    if(str.compare(i+3,1,"A")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                    if(str.compare(i+3,1,"a")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                }
            }
            if(str.compare(i+1,1,"i")==0)
            {
                if(str.compare(i+2,1,"P")==0)
                {
                    if(str.compare(i+3,1,"A")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                    if(str.compare(i+3,1,"a")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                }
                if(str.compare(i+2,1,"p")==0)
                {
                    if(str.compare(i+3,1,"A")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                    if(str.compare(i+3,1,"a")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                }
            }
        }
        if(str.compare(i,1,"s")==0)
        {
            if(str.compare(i+1,1,"I")==0)
            {
                if(str.compare(i+2,1,"P")==0)
                {
                    if(str.compare(i+3,1,"A")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                    if(str.compare(i+3,1,"a")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                }
                if(str.compare(i+2,1,"p")==0)
                {
                    if(str.compare(i+3,1,"A")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                    if(str.compare(i+3,1,"a")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                }
            }
            if(str.compare(i+1,1,"i")==0)
            {
                if(str.compare(i+2,1,"P")==0)
                {
                    if(str.compare(i+3,1,"A")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                    if(str.compare(i+3,1,"a")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                }
                if(str.compare(i+2,1,"p")==0)
                {
                    if(str.compare(i+3,1,"A")==0)
                    {
                        count++;
                        save[i] = 1;
                    }
                    if(str.compare(i+3,1,"a")==0)
                    {
                        count++;
                        save[i] = 1;

                    }
                }
            }
        }
    }
    int i,j=0;
    for(i=0;i<str.length();i++)
    {
        if(j>0)
        {
            j++;
        }
        if(j==5)
        {
            printf("\"");
            j=0;
        }
        if(save[i]==1)
        {
            printf("\"");
            j++;
        }
        printf("%c",str[i]);
    }
    if(j==4)  printf("\"");
    printf("\n%d",count);
}
