#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		int N,maxx=0;
		scanf("%d",&N);
		set<int> s;
		queue<int> q;
		for(int i=0; i<N; i++) {
			int n;
			scanf("%d",&n);
			if(s.empty()&&q.empty()) {
				s.insert(n);
				q.emplace(n);
				if(q.size()>maxx)	maxx = q.size();
			} else {
				auto it = s.find(n);

				while(it!=s.end()) {
					s.erase(q.front());
					q.pop();
					it = s.find(n);
				}

				s.insert(n);
				q.emplace(n);
				if(q.size()>maxx)	maxx = q.size();
			}
		}
		printf("%d\n",maxx);
	}
}
