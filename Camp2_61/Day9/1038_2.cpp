
#include<bits/stdc++.h>
using namespace std;
double maxx = 0;

int choose(double arr[][25],int N,int go,double sum,int check[],int choosefinal)
{
    //cout << "go = " << go << " ";
    if(go==N-1)
    {
        //cout << "sum = " << sum << endl;
        sum *= arr[go][choosefinal];
        if(sum>maxx)    maxx=sum;
    }
    else{
        for(int i=0;i<N;i++)
        {
            if(i==choosefinal)  continue;
            int ch=0;
            for(int j=0;j<go;j++)
            {
                if(check[j]==i||arr[go][i]==0) ch=1;
            }
            if(ch==0)
            {
                //cout << arr[go][i] << endl;
                //if(go+1==N) choose(arr,N,go+1,sum,check);
                //else
                check[go] = i;
                choose(arr,N,go+1,sum*arr[go][i],check,choosefinal);
                //cout << endl;
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;
    double arr[25][25];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> arr[j][i];
            arr[j][i]/=100;
        }
    }
    int check[N]={0};
    int go=0;
    for(int choosefinal=0;choosefinal<N;choosefinal++)
    for(int i=0;i<N;i++)
    {
        if(i==choosefinal) continue;
        check[go] = i;
        double sum=1;
        //cout << arr[go][i] << " ";
        choose(arr,N,go+1,sum*arr[go][i],check,choosefinal);
        //cout << endl;
    }
    printf("%f",maxx*100);
}
