#include<bits/stdc++.h>		///https://www.proprog.tk/tasks/looblike/descs/7329
using namespace std;
int loob[10001];
vector<int> save;
int main(){
	int N,maxx = 0;
	scanf("%d",&N);
	for(int i=0,l;i<N;i++){
		scanf("%d",&l);
		loob[l]++;
		if(loob[l]>maxx){
			maxx = loob[l];
			save.clear();
			save.emplace_back(l);
		}
		else if(loob[l]==maxx){
			save.emplace_back(l);
		}
	}
	sort(save.begin(),save.end());
	for(auto v : save){
		printf("%d ",v);
	}
}
