#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,same=0;
	scanf("%d",&N);
	vector<int> vec;
	for(int i=1;i<=N;i++){
		int num;
		scanf("%d",&num);
		auto it = upper_bound(vec.begin(),vec.end(),num);
		if(it==vec.end()){
			vec.emplace_back(num);
		}
		else{
			*it = num;
		}
	}
	printf("%d\n",N-vec.size());
}
