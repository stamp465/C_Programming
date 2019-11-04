#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<long long> q;
	long long save2[35],countt=0;
	for(long long i=0;i<35;i++){
		save2[i] = pow(2,i)-1;
	}
	long long x;
	scanf("%lld",&x);
	/*for(long long i=0;i<10;i++){
		long long b=60;
		b ^= (long long)pow(2,i)-1;
		cout << b << endl;
	}*/
	//return 0;
	while(1){
		long long now;
		long long savei,maxx=0,ch=0;
		for(long long i=0;i<35;i++){
			if(save2[i]>x){
				now = save2[i];
				break;
			}
			if(save2[i]==x)	{
				ch = 1;
				break;
			}
			if(save2[i]+1==x)	{
				ch = 1;
				break;
			}
		}
		if(ch==1)	break;
		for(long long i=0;i<35;i++){
			long long b = x;
			b ^= save2[i];
			if(b<=now){
				if(b>maxx){
					maxx = b;
					savei = i;
				}
			}
		}
		//printf("%lld ",savei);
		//break;
		x ^= save2[savei];
		x++;
		//printf("%lld\n",x);
		q.emplace(savei);
	}
	printf("%lld\n",q.size()*2);
	while(!q.empty()){
		printf("%lld ",q.front());
		q.pop();
	}
}
