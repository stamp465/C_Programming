#include<bits/stdc++.h>
using namespace std;

/*long long int rcm(long long int a,long long int b)
{
    int x=a,y=b;
    while(1)
    {
        if(a>b) swap(a,b);
        int rcm = b%a;
        b%=a;
        if(rcm==0)    {
            //return a;
            break;
        }
    }
    return x*y/a;
}*/

int main()
{
    long long int N,lcmm=1;
    cin >> N;
    long long int arr[N];
    for(long long int i=0;i<N;i++)
    {
        cin >> arr[i];
        if(arr[i]<0)    arr[i]*=-1;
        if(arr[i]==0)   lcmm=0;
    }
    if(lcmm==0) cout << lcmm << endl;
    else{
        for(long long int i=0;i<N-1;i++)
        {
            /*if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
            arr[i+1] = rcm(arr[i],arr[i+1]);*/
            int a=arr[i],b=arr[i+1];
            while(1){
                if(a>b) swap(a,b);
                int rcm = b%a;
                b%=a;
                if(rcm==0)    {
                    break;
                }
            }
            arr[i+1] = arr[i]*arr[i+1]/a;
        }
    }
    cout << arr[N-1];
}

