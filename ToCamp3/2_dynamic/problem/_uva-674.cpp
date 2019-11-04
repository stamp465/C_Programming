#include<bits/stdc++.h>
using namespace std;
int w[6] = {0,1,5,10,25,50};
int check[7500][6];

void fill_check(){
	for(int i=1;i<=5;i++){
		for(int j=0;j<7500;j++){
			if(i==1)	check[j][i] = 1;
			else{
				check[j][i] += check[j][i-1];
				if(j>=w[i])	check[j][i] += check[j-w[i]][i];
			}
		}
	}
}


int main()
{
	fill_check();
	int N;
	while( scanf("%d",&N) == 1){
		if(N<=0)	printf("0\n");	
		else printf("%d\n",check[N][5]);
	}
}
