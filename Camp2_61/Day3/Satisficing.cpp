#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,score=0;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        int a; cin >> a;
        int arr[4] = {0};
        for(int i=0;i<4;i++)
            cin >> arr[i];
        sort(arr,arr+4);
        if(arr[1]+arr[2]+arr[3]>score)  score = arr[1]+arr[2]+arr[3];
    }
    while(1)
    {
        int a; cin >> a;
        int arr[4] = {0};
        for(int i=0;i<4;i++)
            cin >> arr[i];
        sort(arr,arr+4);
        if(arr[1]+arr[2]+arr[3]>score){
            cout << a << endl;
            cout << arr[1]+arr[2]+arr[3] << endl;
            break;
        }
    }
}
