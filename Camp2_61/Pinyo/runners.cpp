#include<bits/stdc++.h>
using namespace std;
class PQ{
public:
    int num;
    float delay;
    float time;
    PQ(int num,float delay,float time){
        this->num = num;
        this->delay = delay;
        this->time = time;
    };
};

struct PQComparator{
    bool operator()(const PQ& p1,const PQ& p2){
        if(p1.time==p2.time)    return p1.delay < p2.delay ;
        return p1.time > p2.time ;
    };
};

priority_queue<PQ,vector<PQ>,PQComparator>  pq;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int N;
        float go;
        scanf("%d %f",&N,&go);
        go*=1000;
        for(int i=0;i<N;i++){
            float speed;
            float delay;
            scanf("%f %f",&speed,&delay);
            //printf("...%f %f %f\n",speed,delay,(go/speed)+delay);
            pq.push(PQ(i+1,delay,(go/speed)+delay));
        }
        while(!pq.empty()){
            PQ a = pq.top();
            pq.pop();
            printf("%d\n",a.num);
        }
    }
}
