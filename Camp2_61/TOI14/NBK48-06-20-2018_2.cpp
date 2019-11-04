#include<bits/stdc++.h>
using namespace std;
long int arr[1000000];
vector<pair<long int,int> > vec;
vector<pair<long int,int> >::iterator it;

bool funtion_first(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first)    return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    int N,Q,save=0;
    scanf("%d %d",&N,&Q);
    vec.push_back({0,0});
    for(int i=1;i<=N;i++){
        scanf("%ld",&arr[i]);
        arr[i] = arr[i-1]+arr[i];
        while(!vec.empty()&&vec.back().first >= arr[i]){
            vec.pop_back();
        }
        vec.push_back({arr[i],i});
    }
    sort(vec.begin(),vec.end(),funtion_first);
    /*for(int i=0;i<vec.size();i++){
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    cout << endl;*/
    vec.push_back({INT_MAX,N});
    for(int i=0;i<Q;i++){
        long int money,savei=0;
        scanf("%ld",&money);
        it = lower_bound(vec.begin(), vec.end(), make_pair(money,1000000));
        int d = it - vec.begin();
        //printf("...%ld\n",it->first);
        if( vec[d].first > money)    d--;
        printf("%ld\n",vec[d].second);
    }

}

