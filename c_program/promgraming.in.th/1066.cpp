#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vec,vec2;
	int N;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		int power;
		cin >> power;
		vec2.push_back(power);
		vec.push_back(power);
	}
	int sum = 0;
	while(vec.size()>1){
		int maxx=0,savei1,savei2;
		for(int i=1;i<vec.size();i++)
		{
			int a = vec[i]-vec[i-1];
			if(a<0)	a*=-1;
			if(a>maxx){
				maxx = a;
				savei1 = i;
				savei2 = i-1;
			}
		}
		sum += maxx;
		//cout << "..." << maxx;
		//vec.erase(vec.begin()+savei1-1);
		//vec.erase(vec.begin()+savei2-1);
		vec.clear();
		for(int i=0;i<vec2.size();i++){
			if(i!=savei1&&i!=savei2)	vec.push_back(vec2[i]);
		}
		vec2.clear();
		for(int i=0;i<vec.size();i++){
			vec2.push_back(vec[i]);
		}
	}
	cout << sum;
}
