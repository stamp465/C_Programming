#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int n,m;
int arr[401][401];
vector<int> t[401];
vector<int> b[401];
int bfs_t(int u) {
	bool check[401] = {0};
	vector<int> dis_t(405,1e9);
	queue<int> q;
	q.emplace(u);
	dis_t[u] = 0;
	while(!q.empty()) {
		int current = q.front();
		q.pop();
		if(check[current]==1)	continue;
		check[current] = 1;
		for(auto i : t[current]) {
			dis_t[i] = min(dis_t[i],dis_t[current]+1);
			//printf("%d %d %d\n",current,i,dis_t[i]);
			q.emplace(i);
		}
	}
	return dis_t[n];
}
int bfs_b(int u) {
	bool check[401] = {0};
	vector<int> dis_b(405,1e9);
	queue<int> q;
	q.emplace(u);
	dis_b[u] = 0;
	while(!q.empty()) {
		int current = q.front();
		q.pop();
		if(check[current]==1)	continue;
		check[current] = 1;
		for(auto i : b[current]) {
			dis_b[i] = min(dis_b[i],dis_b[current]+1);
			//printf("%d %d %d\n",current,i,dis_b[i]);
			q.emplace(i);
		}
	}
	return dis_b[n];
}

int main() {
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++) {
		int u,v;
		scanf("%d %d",&u,&v);
		arr[u][v] = 1;
		arr[v][u] = 1;
		t[u].emplace_back(v);
		t[v].emplace_back(u);
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(j!=i) {
				if(arr[i][j]==0) {
					b[i].emplace_back(j);
					b[j].emplace_back(i);
				}
				//delete[] arr[i];
			}
		}
	}
	//delete[] arr;
	int t = bfs_t(1);
	//cout << t << endl;
	int b = bfs_b(1);
	//cout << b << endl;


	int maxx = max(t,b);
	if(maxx==1e9)	printf("-1\n");
	else			printf("%d\n",maxx);
}
