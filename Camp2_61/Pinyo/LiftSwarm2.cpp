#include<bits/stdc++.h>
using namespace std;

struct Go{
    int flor;
    int use;
};

int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    Go lift[K];
    for(int i=0;i<K;i++){
        scanf("%d",&lift[i].flor);
    }
    for(int i=0;i<K;i++){
        scanf("%d",&lift[i].use);
    }
    int L;
    scanf("%d",&L);
    while(L--){
        int st,en;
        scanf("%d %d",&st,&en);
        int savei,mindis=1000000,minuse=1000000;
        for(int i=0;i<K;i++)
        {
            if(lift[i].flor>st){
                if(lift[i].flor-st<=mindis){
                    //cout << lift[i].flor << " " << lift[i].use << "...\n";
                    if(lift[i].flor-st==mindis){
                        if(lift[i].use<minuse||(i>savei&&savei<st)){
                            mindis = lift[i].flor-st;
                            minuse = lift[i].use;
                            savei = i;
                        }
                    }
                    else{
                        mindis = lift[i].flor-st;
                        minuse = lift[i].use;
                        savei = i;
                    }
                }
            }
            else{
                if(st-lift[i].flor<=mindis){
                    //cout << lift[i].flor << " " << lift[i].use << "***\n";
                    if(st-lift[i].flor==mindis){
                        if(lift[i].use<minuse){
                            mindis = st-lift[i].flor;
                            minuse = lift[i].use;
                            savei = i;
                        }
                    }
                    else{
                        mindis = st-lift[i].flor;
                        minuse = lift[i].use;
                        savei = i;
                    }
                }
            }
        }
        printf("%d %d\n",lift[savei].flor,lift[savei].use);
        if(st>lift[savei].flor)    lift[savei].use += (st - lift[savei].flor);
        else                        lift[savei].use += (lift[savei].flor - st);
        //cout << lift[savei].flor << " " << lift[savei].use << "ccc1\n";
        if(st>en)                   lift[savei].use += st - en;
        else                        lift[savei].use += en - st;
        //cout << lift[savei].flor << " " << lift[savei].use << "ccc\n";
        lift[savei].flor = en;
    }
}
