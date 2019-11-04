#include<bits/stdc++.h>
using namespace std;
class PQ{
public :
	int die;
	PQ(int die){
		this->die = die;	
	};
};

struct PQCompartor{
	bool operator()(const PQ& p1,const PQ& p2){
		return p1.die > p2.die;	
	};
};

priority_queue<PQ,vector<PQ>,PQCompartor> pq;

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		int K;
		scanf("%d",&K);
		for(int i=0;i<K;i++)
		{
			int die;
			scanf("%d",&die);
			pq.push(PQ(die));
		}
		int day=0;
		while(1){
			if(day==pq.top().die) break;
			int a = pq.top().die;
			pq.pop();
			pq.push(PQ(a+1));
			day++;
		}
		printf("%d\n",day);
	}
}
