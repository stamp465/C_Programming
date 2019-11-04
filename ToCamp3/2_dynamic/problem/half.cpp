#include<bits/stdc++.h>
using namespace std;

bool check[102][20005];

int arr[102],minn=1e9;

int main(){
	check[0][10000] = true;
	int N,sum=0;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%d",&arr[i]);
		//arr[i] += 10000;
		sum += arr[i];
	}
	sum += 10000;
	//printf("sum = %d\n",sum);
	for(int item=1;item<=N;item++){
		for(int i=item-1;i>=0;i--){
			for(int j=0;j<20005;j++){
				if(check[i][j]==true){
					check[i+1][j+arr[item]] = true;
					//printf("%d %d = true\n",i+1,j+arr[item]);
					if(i+1==N/2){
						int a = (sum-(sum-(j+arr[item])))-10000;
						int b = sum-(j+arr[item]);
						//printf("%d %d %d %d\n",i+1,a,b,abs(a-b));
						if(abs(a-b)<minn){
							minn = abs(a-b);
						}
					}
				}
			}
		}
	}
	printf("%d\n",minn);
	
}
