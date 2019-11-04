#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> a;
	set<int>::iterator it;
	for(int i=0;i<10;i++)
		a.insert(i);
	it = a.find(3);
	cout << distance(a.begin(),it);
}
