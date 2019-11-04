#include<bits/stdc++.h>
using namespace std;
vector<int> vec[2000];
bool checkvec(vector<int> i,int num)
{
	if(i.empty())	return true;
	for(int j=0;j<i.size();j++)
	{
		if(num==i[j])	return false;
	}
	return true;
}
bool se(int i)
{
	vector<int> check;
	queue<int> q;
	q.push(i);
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for(int j=0;j<vec[u].size();j++)
		{
			q.push(vec[u][j]);
			if(vec[i][j]==i)	return false;
			if(checkvec(check,vec[u][j]))
			{
				check.push_back(vec[u][j]);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int N;
	cin >> N;
	for(int i=1;i<=N;i++)
	{
		int n;
		cin >> n;
		for(int j=0;j<n;j++)
		{
			int num;
			cin >> num;
			vec[i].push_back(num);
		}
	}
	for(int i=1;i<=N;i++)
	{
		if(!se(i))	cout << "YES" << endl;
		else		cout << "NO"  << endl;
	}
}
