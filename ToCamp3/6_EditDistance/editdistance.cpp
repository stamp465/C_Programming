#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	string b;
	cin >> a >> b;
	int arr[a.size()+1][b.size()+1];
	for(int i=0;i<a.size();i++){
		arr[i][0] = i;
	}
	for(int i=0;i<b.size();i++){
		arr[0][i] = i;
	}
	for(int i=1;i<=a.size();i++){
		for(int j=1;j<=b.size();j++){
			if(a[i-1]==b[j-1]){
				arr[i][j] = min(arr[i-1][j],min(arr[i][j-1],arr[i-1][j-1]));
			}
			else{
				arr[i][j] = min(arr[i-1][j],min(arr[i][j-1],arr[i-1][j-1])) + 1;
			}
		}
	}
	for(int i=1;i<=a.size();i++){
		for(int j=1;j<=b.size();j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("%d\n",arr[a.size()-1][b.size()-1]);
}
