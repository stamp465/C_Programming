#include<bits/stdc++.h>
using namespace std;
int arr[100],sum=0,maxx[2]={0,0},minn[2]={10000,0};
int main()
{
	int N,day;
	cin >> N >> day;
	for(int i=0;i<day;i++){
		for(int j=0;j<N;j++){
			int work;
			cin >> work;
			if(work>10)	work=10;
			sum += work*40;
			//cout << "\nsum = " << sum << endl;
			arr[j] += work*40;
			if(arr[j]>maxx[0]){
				maxx[0] = arr[j];
				maxx[1] = j+1;
			}
			
		}
	}
	for(int j=0;j<N;j++)
		if(arr[j]<minn[0]){
				minn[0] = arr[j];
				minn[1] = j+1;
			}
	printf("%d\n%d\n%d\n",sum,maxx[1],minn[1]);
}
