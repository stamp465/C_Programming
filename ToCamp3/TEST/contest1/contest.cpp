#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main(){
	int N; 
	cin >> N;
	string a;
	cin >> a;
	int save[a.size()] = {0};
	int pre[a.size()] = {0};
	save[0] = (int)a[0];
	for(int i=1;i<a.size();i++){
		if((int)a[i] < save[i-1]){
			printf("YES\n%d %d",pre[i-1]+1,i+1);
			return 0;
		}
		save[i] = max(save[i-1],(int)a[i]);
		if(save[i]==(int)a[i])	pre[i] = i;
		else					pre[i] = pre[i-1];
	}
	printf("NO\n");
}
