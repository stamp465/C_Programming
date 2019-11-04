#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main()
{
	int N,sum = 0;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		cin >> arr[i];
		if(i>=2){
			if(arr[i]<4&&arr[i-1]<4&&arr[i-2]<4)	break;
		}
		if(arr[i]>12){
			arr[i] = 12;
			sum += 300+(arr[i]-8)*50;
		}
		else if(arr[i]>8){
			sum += 300+(arr[i]-8)*50;
		}
		else if(arr[i]==8){
			sum += 300;
		}
		else if(arr[i]>=4){
			sum += 150;
		}
	}
	cout << sum;
}
