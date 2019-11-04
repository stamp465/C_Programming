#include<bits/stdc++.h>
using namespace std;
long long w[22];
long long  check[10005][22];

long long  power3(long long  i){
	return i*i*i;
}

long long  save3(){
	for(long long  i=0;i<22;i++){
		w[i] = i*i*i;
	}
}

void fill_check(){
	for(long long  i=1;i<=21;i++){
		for(long long  j=0;j<10005;j++){
			if(i==1)	check[j][i] = 1;
			else{
				check[j][i] += check[j][i-1];
				if(j>=w[i])	check[j][i] += check[j-w[i]][i];
			}
		}
	}
}


int main(){
	save3();
	fill_check();
	long long  N;
	while( scanf("%lld",&N) != -1){
		if(N<=0)	printf("0\n");	
		else printf("%lld\n",check[N][21]);
	}
}
