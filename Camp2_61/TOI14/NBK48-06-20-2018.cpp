#include<bits/stdc++.h>
using namespace std;
long int arr[1000000];
vector<pair<int,int> > vec;
vector<pair<int,int> >::iterator it;

bool funtion_first(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first)    return a.second > b.second;
    return a.first < b.first;
}

bool funtion(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
int main()
{
    int N,Q;
    scanf("%d %d",&N,&Q);
    //vec.push_back({0,0});
    for(int i=1;i<=N;i++){
        scanf("%ld",&arr[i]);
        //vec.push_back({arr[i]+arr[i-1],i});
        arr[i] += arr[i-1];
    }
    //sort(vec.begin(),vec.end(),funtion_first);
    /*for(int i=0;i<vec.size();i++){
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    cout << endl;*/
    for(int i=0;i<Q;i++){
        int money,savei=0;
        scanf("%d",&money);
        for(int j=N;j>=0;j--){
            if(arr[j]<=money){
                printf("%d\n",j);
                break;
            }
        }
        /*it = lower_bound (vec.begin(), vec.end(), make_pair(money,-1));
        int d = it-vec.begin();
        //cout << d << "..." << endl;
        //printf("...%d...\n",vec[d].first);
        if( vec[d].first > money)    d--;
        //cout << d << "..." << endl;
        sort(vec.begin(),vec.begin()+d+1,funtion);
        printf("%d\n",vec[d].second);*/
    }

}
