#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M,Q;
    cin >> N >> M >> Q;
    int arr[N+1] = {0};
    for(int i=0;i<M;i++)
    {
        int j,k;
        cin >> j >> k;
        for(int a=j;a<k+j;a++)
        {
            if(arr[a]==0)   arr[a] = -1;
            else    arr[a] = 0;
        }
    }
    /*vector<int> save;
    for(int i=1;i<=N;i++)
    {
        if(i==N)    {
                save.push_back(i+1);
                break;
        }
        if(arr[i]!=arr[i-1]||i==1)    save.push_back(i);

    }*/
    for(int i=1;i<=N;i++){
        if(arr[i]<=0){
            int count=1;
            for(int j=i+1;j<=N;j++)
            {
                if(arr[j]==arr[i]){
                        count++;
                }
                else    break;
            }
            for(int j=i+1;j<=N;j++)
            {
                if(arr[j]==arr[i]){
                    arr[j] = count;
                }
                else    break;
            }
            arr[i] = count;
        }
    }
    /*for(int i=1;i<=N;i++){
        cout << arr[i] << endl;
    }*/
    for(int i=0;i<Q;i++)
    {
        int show;
        cin >> show;
        cout << arr[show] << endl;

    }
}
