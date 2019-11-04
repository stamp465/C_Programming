#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K;
    cin >> N >> K;
    int arr[N][N];
    vector<int> vec,vec2;
    for(int i=1;i<=N;i++)
    {
        vec.push_back(i);
        vec2.push_back(i);
    }
    reverse(vec2.begin(),vec2.end());
    vec2.insert(vec2.begin(),vec2.back());
    vec2.pop_back();
    int check=0;
    for(int i=0;i<N;i++)
    {
        if(check==1){
            for(int j=0;j<N;j++)
            {
                arr[i][j] = vec2[j];
            }
        }
        else{
            for(int j=0;j<N;j++)
            {
                arr[i][j] = vec[j];
            }
        }
        vec.insert(vec.begin(),vec.back());
        vec.pop_back();
        vec2.insert(vec2.begin(),vec2.back());
        vec2.pop_back();
        if(K!=0)
        if(i%K==K-1){
            if(check==0)    check = 1;
            else if(check==1)   check=0;
        }
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

