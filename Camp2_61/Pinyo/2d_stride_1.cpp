#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N][N];
    vector<int> vec;
    for(int i=1;i<=N;i++)
    {
        vec.push_back(i);
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            arr[i][j] = vec[j];
        }
        vec.insert(vec.begin(),vec.back());
        vec.pop_back();
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout << arr[i][j]%10 << " ";
        }
        cout << endl;
    }
}
