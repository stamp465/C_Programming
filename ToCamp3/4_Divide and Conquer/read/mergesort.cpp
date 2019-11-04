#include <bits/stdc++.h>
using namespace std;
void msort(vector<int>& v) {
	if(v.size() == 1) return;
	vector<int> l,r;
	int k = v.size()/2;
	for(int i = 0; i < k; i++) l.push_back(v[i]);
	for(int i = k; i < v.size(); i++) r.push_back(v[i]);
	msort(l);
	msort(r);
	int lptr = 0;
	int rptr = 0;
	int ptr = 0;
	while(lptr < l.size() && rptr < r.size()) {
		if(l[lptr] < r[rptr]) {
			v[ptr] = l[lptr];
			ptr++;
			lptr++;
		} else {
			v[ptr] = r[rptr];
			ptr++;
			rptr++;
		}
	}
	while(lptr < l.size()) {
		v[ptr] = l[lptr];
		lptr++;
		ptr++;
	}
	while(rptr < r.size()) {
		v[ptr] = r[rptr];
		rptr++;
		ptr++;
	}
}
int main() {
	int n;
	scanf("%d",&n);
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
	msort(v);
	for(int i = 0; i < n; i++) {
		printf("%d\n",v[i]);
	}
	return 0;
}
