#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int k,n,count=0;
	cin >> k >> n;
	for(int i=0;i<n;i++)
	{
		bitset<64> a(i),b(i+1);
		//cout << a << endl;
		//cout << b << endl;
		bitset<64> c = a^b;
		//cout << "C = " << c << endl;
		for(int i=0;i<64;i++)
		{
			if(c[i]==1)	count++;
		}
	}
	cout << count;
	/*int a,count=0,d;
	cin >> a >> d;
	bitset<64> b(a),c(d);
	b = b^c;
	cout << b << endl;
	for(int i=0;i<32;i++)
	{
		if(b[i]==1)	count++;
	}
	cout << count;*/
}
