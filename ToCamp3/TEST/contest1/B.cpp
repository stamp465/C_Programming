#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,c=0;
	cin >> N;
	string a;
	cin >> a;
	for(int i=0;i<(a.size()-11)+1;i++){
		if(a[i]=='8')	c++;
	}
	if(c > (a.size()-11)/2)	printf("YES");
	else					printf("NO");
}
