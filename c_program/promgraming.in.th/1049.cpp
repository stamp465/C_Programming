#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<pair<int,int> > a[10005];
	int N,all;
	cin >> N >> all;
	for(int i=0;i<N;i++)
	{
		int num,loo,speed;
		cin >> num >> loo >> speed;
		a[loo].push_back(make_pair(num,speed));
	}
	while(1){
		if(N==0)	break;
		int maxspeed=0,savei=0;
		for(int i=1;i<=all;i++)
		{
			if(!a[i].empty())
			{
				pair<int,int> check = a[i].front();
				a[i].pop_front();
				if(check.second>maxspeed){
					maxspeed = check.second;
					savei = check.first;
				}
				N--;
			}
		}
		cout << savei << endl;
	}
}
