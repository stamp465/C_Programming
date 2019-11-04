#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> q;
	int numlon,numcar,sum=0;
	cin >> numlon >> numcar;
	int lon[numlon],chlon[numlon]={0},car[numcar],chcar[numcar]={0},check[numcar]={0};
	for(int i=0;i<numlon;i++)
	{
		cin >> lon[i];
	}
	for(int i=0;i<numcar;i++)
	{
		cin >> car[i];
	}
	int c=numcar*2;
	while(c--){
		int N;
		cin >> N;
		if(N>0){
			N--;
			q.push(N);
			int qq = q.front(),findd=0;;
			for(int i=0;i<numlon;i++)
			{
				if(chlon[i]==0){
					chlon[i]=1;
					check[qq] = 1;
					//cout << lon[i] << " " << car[qq] << endl;
					sum+=lon[i]*car[qq];
					chcar[qq] = i;
					findd=1;
					break;
				}
			}
			//cout << sum << endl;
			if(findd==1)	q.pop();
		}
		else{
			N*=-1;
			N--;
			chlon[chcar[N]] = 0;
			check[N] = 2;
			if(!q.empty()){
				int qq = q.front(),findd=0;
				for(int i=0;i<numlon;i++)
				{
					if(chlon[i]==0){
						chlon[i]=1;
						check[qq] = 1;
						//cout << lon[i] << " " << car[qq] << endl;
						sum+=lon[i]*car[qq];
						chcar[qq] = i;
						findd=1;
						break;
					}
				}
				//cout << sum << endl;
				if(findd==1)	q.pop();
			}
		}
		
		
		int check=0;
		for(int i=0;i<numcar;i++)
		{
			if(chcar[numcar]!=2){
				check=1;
				break;
			}
		}
		if(check==0)	break;	
	}
	cout << sum;
}
/*
3 5
1 1 1
100 200 300 400 500
2
3
4
5
1
-4
-2
-5
-1
-3

*/
