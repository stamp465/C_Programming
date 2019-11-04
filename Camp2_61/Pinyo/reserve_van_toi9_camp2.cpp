#include<bits/stdc++.h>
using namespace std;

class PQ{
public :
    int use;
    int num;
    PQ(int use,int num){
        this->use = use;
        this->num = num;
    }
};

struct PQComparator{
    bool operator()(const PQ& p1,const PQ& p2){
        if(p1.use==p2.use)  return p1.num > p2.num;
        return p1.use > p2.use;
    };
};

priority_queue<PQ,vector<PQ>,PQComparator> pq;

int main()
{
    int N,Car;
    scanf("%d %d",&N,&Car);
    for(int i=1;i<=Car;i++){
        pq.push(PQ(0,i));
    }
    for(int i=0;i<N;i++){
        int go;
        scanf("%d",&go);
        PQ q = pq.top();
        pq.pop();
        printf("%d\n",q.num);
        pq.push(PQ(q.use+go,q.num));
    }
}
