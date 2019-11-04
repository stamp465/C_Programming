#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,M,countt=0;
	cin >> N >> M;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++){
			int a;
			cin >> a;
			if(a==1)	countt++;
		}
	}
	cout << countt;
}
