#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int N;
	cin >> N;
	vector< pair<double,double> > price;
	for(int i=0;i<N;i++)
	{
		double sellall,kg;
		cin >> sellall >> kg;
		price.push_back(make_pair(sellall/kg,kg));
	}
	sort(price.begin(),price.end());
	int M;
	cin >> M;
	int pos=0;
	for(int i=0;i<M;i++)
	{
		double man;
		double sum=0;
		cin >> man;
		while(1){
			if(man==0)	break;
			else{
				if(price[pos].second>man){
					price[pos].second -= man;
					sum += price[pos].first*man;
					man = 0;
				}
				else{
					man -= price[pos].second;
					sum += price[pos].first*price[pos].second;
					pos++;
				}
			}
		}
		printf("%.3f\n",sum);
	}
}
