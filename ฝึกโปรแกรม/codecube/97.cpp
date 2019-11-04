#include <bits/stdc++.h>
using namespace std;
int arr[20000];
int main()
{
    int n,i,c=0,t;
    scanf("%d",&n);
    for ( i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            arr[c] = i;
            if(arr[c]*arr[c-1]==n)
            {
                t=1;    break;
            }
            if(arr[c]*arr[c]==n)
            {
                t=2;    break;
            }
            c++;

        }
    }

    for(i=c-1;i>=0;i--)
    {
        if(n/arr[i]!=arr[i])
            printf("%d ",n/arr[i]);
    }
    return 0;
}
