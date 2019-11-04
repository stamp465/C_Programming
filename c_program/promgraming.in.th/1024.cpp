#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int arr[N];
	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}
	int save2=0,save3=0,max=-100000,min=100000,minus=1000000;
	int sum1=0,i,j,k;
	for(i=0; i<N-2; i++) {
		//cout << "i=" << arr[i] << endl;
		sum1 += arr[i];
		//cout << "i=" << sum1 << endl;
		int sum2=0;
		for(j=i+1; j<N-1; j++) {
			//cout << "j=" << arr[j] << endl;
			sum2 += arr[j];
			//cout << "j=" << sum2 << endl;
			int sum3=0;
			for(k=j+1; k<N; k++) {
				//cout << "k=" << arr[k] << endl;
				sum3 += arr[k];
			}
			max=-100000,min=100000;
			//cout << "k=" << sum3 << endl;
			if(sum1>max)	max = sum1;
			if(sum1<min)	min = sum1;
			if(sum2>max)	max = sum2;
			if(sum2<min)	min = sum2;
			if(sum3>max)	max = sum3;
			if(sum3<min)	min = sum3;
			int dev = max - min;
			if(dev<0) dev*=-1;
			if(minus>dev) {
				//cout << "gogo" << endl;
				//cout << max << " " << min << endl;
				minus = dev;
				save2 = i+1;
				save3 = j+1;
			}
		}
	}
	printf("%d %d",save2+1,save3+1);
}
