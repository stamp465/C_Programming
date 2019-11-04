#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
vector<int> vec;
int main()
{
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    if(N<3){
        printf("no");
        return 0;
    }
    sort(arr,arr+N);
    if(arr[0]+arr[1]<=arr[N-1])  {
        printf("yes");
        return 0;
    }
    printf("no");
}
