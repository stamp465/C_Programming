#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
int arr[1000000];
int be[1000000];
int dp[1000000];
int main(){
	int i=1;
	while( scanf("%d",&arr[i]) == 1){
		auto it = lower_bound(vec.begin(),vec.end(),make_pair(arr[i],0) );
		if(it==vec.end()){
			vec.emplace_back(arr[i],i);
		}
		else{
			*it = make_pair(arr[i],i);
		}
		if(it!=vec.begin()&&vec.size()!=1){
			--it;
			be[i] = it->second;
		}
		i++;
	}
	auto it = vec.rbegin();
	stack<int> savebe;
	savebe.emplace(it->second);
	while(savebe.top()!=0){
		savebe.emplace(be[savebe.top()]);
	}
	savebe.pop();
	printf("%d\n-\n",savebe.size());
	while(!savebe.empty()){
		printf("%d\n",arr[savebe.top()]);
		savebe.pop();
	}
}
