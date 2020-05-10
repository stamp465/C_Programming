//Traveling Pooh
#include<bits/stdc++.h>
using namespace std;

int door[200500],visit[230000],group[200500];

int bfs(int node){
	visit[node] = 1;
	queue<int> q;
    q.push(node);
    while(!q.empty()){
        int go = q.front();
        group[go] = node;
        q.pop();
        //printf("go -> %d\n",go);
        if(visit[door[go]]==0){
            visit[door[go]] = 1;
            q.push(door[go]);
        }
    }
    
}

int main(){
	int N,Q;
	scanf("%d %d",&N,&Q);
	for(int i=1;i<=N;i++){
		scanf("%d",&door[i]);	
	}
	for(int i=1;i<=N;i++){
		if(group[i]==0){
			bfs(i);
		}
	}
	/*for(int i=1;i<=N;i++){
		printf("%d ",group[i]);
	}printf("\n");*/
	if(N>5000){
		for(int i=1;i<=Q;i++){
			//for(int j=1;j<=N;j++)	visit[j] = 0;
			int devi,nobi,a,b;
			scanf("%d %d %d %d",&devi,&nobi,&a,&b);
			if(group[devi]==group[nobi]){
				if(group[a]==group[b]){
					printf("DEAD\n");
				}else{
					
				}
			}else{
				if(group[a]==group[b]){
					printf("SURVIVE\n");
				}else{
					
				}
			}
		}
	}
	else{
		for(int i=1;i<=Q;i++){
		for(int j=1;j<=N;j++)	visit[j] = 0;
		int devi,nobi,a,b;
		scanf("%d %d %d %d",&devi,&nobi,&a,&b);
		int doora = door[a], doorb = door[b];
		door[a] = doorb;
		door[b] = doora;
		while(1){
			if(visit[devi] == 1){
				printf("SURVIVE\n");
				break;
			}
			if(visit[devi] == 0){
				visit[devi] = 1;
				devi = door[devi];
			}
			if(devi == nobi){
				printf("DEAD\n");
				break;
			}
			//printf("%d\n",devi);
		}
		
		door[a] = doora;
		door[b] = doorb;
	}
}
}
	

/*
5 2
1 4 2 3 5
1 2 3 4
2 3 4 5

5 2
5 3 4 2 1
1 2 3 4
2 3 4 5

*/

/*int doora = door[a], doorb = door[b];
				door[a] = doorb;
				door[b] = doora;
				while(1){
					if(visit[devi] == 1){
						printf("SURVIVE\n");
						break;
					}
					if(visit[devi] == 0){
						visit[devi] = 1;
						devi = door[devi];
					}
					if(devi == nobi){
						printf("DEAD\n");
						break;
					}
					//printf("%d\n",devi);
				}
				
				door[a] = doora;
				door[b] = doorb;*/
