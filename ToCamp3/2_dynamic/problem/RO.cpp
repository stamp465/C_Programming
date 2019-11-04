#include<bits/stdc++.h>
using namespace std;
int R[1000000]= {0},O[1000000]= {0},RO[1000000]= {0},qs[1000000]= {0};
char a[1000000];
int main() {
	int N,K,check=0;
	scanf("%d %d",&N,&K);
	scanf("%s",&a);
	for(int i=0; i<N; i++) {
		if(a[i]=='R') {
			R[i]=-K;
		}
		if(a[i]=='O') {
			O[i]=1;
		}
		RO[i] = R[i] + O[i];
		if(i>0)	qs[i] += RO[i]+qs[i-1];
		else	qs[i] = RO[i];



		for(int j=i-1;j>=0;j--){
			if(qs[i]==i){
				
			}
		}
		//if(i>0)	R[i] += R[i-1];
		//if(i>0)	O[i] += O[i-1];
	}
	printf("%d\n",check);
	
	for(int i=0;i<N;i++){
		cout << qs[i] << " ";
	}
	cout << endl;

	/*int check = K+1,ans=0;
	while(check<=N){
		for(int i=check-1;i<N;i++){
			if(i==check-1){
				//printf("%d = %d %d\n",i,R[i],O[i]);
				if( R[i]*K == O[i] ){
					ans = check ;
					//printf("1...%d...\n",ans);
					break;
				}
			}
			else{
				//printf("%d = %d %d\n",i,R[i],O[i]);
				if( (R[i]-R[i-check])*K == O[i]-O[i-check] ){
					ans = check ;
					//printf("2...%d...\n",ans);
					break;
				}
			}
		}
		//printf("\n");
		check += K+1;
	}
	printf("%d\n",ans);*/
}
