#include<bits/stdc++.h>
using namespace std;
struct Meg {
	long int st;
	long int en;
	long int go;
};

class PQ {
	public :
		long int st;
		long int en;
		long int go;
		PQ(long int st,long int en,long int go) {
			this->st = st;
			this->en = en;
			this->go = go;
		}
};

struct	PQcom {
	bool operator()(const PQ&p1,const PQ&p2) {
		return p1.st > p2.st;
	};
};
int main() {
	long int N,Q;
	scanf("%ld %ld",&N,&Q);
	Meg cloud[N];
	for(long int i=0; i<N; i++) {
		scanf("%ld %ld %ld",&cloud[i].st,&cloud[i].en,&cloud[i].go);
		if(cloud[i].go==1)  cloud[i].go = -1;
		if(cloud[i].go==2)  cloud[i].go = 1;
	}
	//sort(cloud,cloud+N,MegComparetor());
	for(long int o=0; o<Q; o++) {
		long int P;
		scanf("%ld",&P);
		long int countt=0;
		priority_queue<PQ,vector<PQ>,PQcom>	pq;
		vector<pair<long int,long int> > check;
		for(long int i=0; i<N; i++) {
			pq.push(PQ(cloud[i].st+cloud[i].go*P,cloud[i].en+cloud[i].go*P,cloud[i].go));
		}
		//sort(coppy,coppy+N,MegComparetor());
		while(!pq.empty()) {
			PQ q = pq.top();
			pq.pop();
			if(q.st<1&&q.en<1) continue;
			if(q.st>1000000000)	continue;
			if(!check.empty()) {
				long int cum = 0;
				for(long int i=0;i<check.size();i++){
					if(q.st>=check[i].first){
						if(q.en<=check[i].second){
							cum=1;
							break;
						}
						if(q.st<=check[i].second&&q.en>check[i].second){
							check[i].second = q.en;
							cum = 1;
							break;
						}
					}
				}
				if(cum==0){
					check.push_back({q.st,q.en});
				}
			} else {
				check.push_back({q.st,q.en});
			}

		}

		printf("%ld\n",check.size());


	}
}
