//Humanity Has Declined 

#include<bits/stdc++.h>
int N,K,Q,st=1,countt=0;
int ans[200500],check[200500],food[200500];

int main(){
	scanf("%d %d %d",&N,&K,&Q);
	for(int i=1;i<=N;i++){
		scanf("%d",&food[i]);
		if(food[i]<=K){
			check[food[i]]++;
			if(check[food[i]]==1)	countt++;
			while(countt==K){
				ans[st] = i;
				check[food[st]]--;
				if(check[food[st]]==0)	countt--;
				st++;
			}
		}
		else{
			
		}
	}
	for(int i=1;i<=Q;i++){
		int st,en;
		scanf("%d %d",&st,&en);
		if(ans[st]==0)	printf("NO\n");
		else if(en>=ans[st]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

/*

10 3 5
1 2 3 1 2 7 8 2 3 1
1 5
4 8
4 9
8 10
7 8

6 3 3
1 2 3 1 2 3
1 6
2 4
3 6

*/
