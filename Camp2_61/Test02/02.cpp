#include<bits/stdc++.h>
using namespace std;
long int checkmax=0;
vector<long int> maxx;
vector<long int> same;
unordered_map<long int,long int> mapp(1000000);
unordered_map<long int,vector<long int> > mapp2(1000000);
unordered_map<long int,long int>::iterator it;
int main(){
    long int N;
    scanf("%ld",&N);
    for(long int i=0;i<N;i++){
        long int go;
        scanf("%ld",&go);
        if(go==1){
            long int P;
            scanf("%ld",&P);
            it = mapp.find(P);
            if(it==mapp.end()){
                mapp[P] = 1;
                if(mapp[P]>=checkmax){
                    if(mapp[P]>checkmax){
                        checkmax = mapp[P];
                        maxx.clear();
                    }
                    if(mapp[P]==checkmax){
                        maxx.push_back(P);
                    }
                }
            }
            else{
                mapp[P]++;
                if(mapp[P]>=checkmax){
                    if(mapp[P]>checkmax){
                        checkmax = mapp[P];
                        maxx.clear();
                    }
                    if(mapp[P]==checkmax){
                        maxx.push_back(P);
                    }
                }
            }
        }
        else if(go==2){
            long int Q,F;
            scanf("%ld %ld",&Q,&F);
            it = mapp.find(Q);
            if(it!=mapp.end())  printf("%ld\n",mapp[Q]);
            else                printf("0\n");
            same.clear();
            for(it=mapp.begin();it!=mapp.end();it++){
                if(it->second==F){
                    same.push_back(it->first);
                }
            }
            printf("%ld ",same.size());
            if(same.size()>5)   printf("\n");
            else{
                sort(same.begin(),same.end());
                for(long int i=0;i<same.size();i++){
                    printf("%ld ",same[i]);
                }
                printf("\n");
            }
            printf("%ld ",maxx.size());
            if(maxx.size()>5)   printf("\n");
            else{
                sort(maxx.begin(),maxx.end());
                for(long int i=0;i<maxx.size();i++){
                    printf("%ld ",maxx[i]);
                }
                printf("\n");
            }
        }
    }
}
/*
15
1 5
1 4
1 3
1 1
1 4
1 5
2 5 1
1 4
2 5 1
2 1 5
2 2 3
1 2
2 2 3
1 4
2 2 3
*/
/*
16
2 1 10000000
1 1
1 2
1 3
1 4
1 5
2 1 1
1 6
2 1 1
1 1
1 1
1 1
1 1
2 1 1
1 1
2 1 1
*/
