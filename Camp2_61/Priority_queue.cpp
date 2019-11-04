#include<bits/stdc++.h>
using namespace std;

class PQ{
	public :
		string name;
		int score;
		
		PQ(string name,int score){
			this->name = name;
			this->score = score;	
		};
};

struct PQComparator{
	bool operator()(const PQ& p0, const PQ& p1){
		return p0.score > p1.score;	
	};
};

priority_queue<PQ, vector<PQ>, PQComparator> pq[10];

int main()
{
	pq[0].push(PQ("AAAA",100));
	pq[0].push(PQ("CCCC",50));
	pq[0].push(PQ("BBBB",10));
	
	while(pq[0].size()>0){
		PQ p = pq[0].top();
		cout << p.name << " " << p.score << endl;
		pq[0].pop(); 
	}
}
