#include<bits/stdc++.h>
using namespace std;

class PQ{
	public :
		int use;
		
		PQ(int use){
			this->use = use;	
		};
};

struct PQComparator{
	bool operator()(const PQ& p0, const PQ& p1){
		return p0.use > p1.use;	
	};
};

priority_queue<PQ, vector<PQ>, PQComparator> lift[60];

int main()
{
	int N,K;
	scanf("%d %d",&N,&K);
	int wh[K];
	for(int i=1;i<=K;i++)
	{
		scanf("%d",&wh[i]);
	}
	for(int i=1;i<=K;i++)
	{
		int uss;
		scanf("%d",&uss);
		lift[wh[i]].push(uss);
	}
	int num;
	scanf("%d",&num);
	while(num--){
		int st,en,i=0;
		scanf("%d %d",&st,&en);
		while(1){
			if(!lift[st+i].empty()&&st+i<=N&&st+i>0){
				int a;
				printf("%d %d\n",st+i,lift[st+i].top().use);
				if(en>st)	a = lift[st+i].top().use+i+en-st;
				else		a = lift[st+i].top().use+i-en+st;
				lift[en].push(a);
				lift[st+i].pop();
				break;
			}
			else if(!lift[st-i].empty()&&st-i<=N&&st-i>0){
				int a;
				printf("%d %d\n",st-i,lift[st-i].top().use);
				if(en>st)	a = lift[st-i].top().use+i+en-st;
				else		a = lift[st-i].top().use+i-en+st;
				lift[en].push(a);
				lift[st-i].pop();
				break;
			}
			
			i++;
		}
	}
}
