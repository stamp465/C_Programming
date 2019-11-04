#include<bits/stdc++.h>
using namespace std;
unsigned long long int save_catalan[10002];
unsigned long long int save_catalan_DP() {
	save_catalan[0] = save_catalan[1] = 1;
	for (int i=2; i<=10001; i++) {
		save_catalan[i] = 0;
		for (int j=0; j<i; j++)
			save_catalan[i] += save_catalan[j] * save_catalan[i-j-1];
			save_catalan[i] %= 909091;
	}
}

int main() {
	save_catalan_DP();
	int N;
	cin >> N;
	cout << save_catalan[N];
}
