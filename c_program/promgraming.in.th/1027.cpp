#include<bits\stdc++.h>
using namespace std;
int main()
{
	map<char,int>	a;
	map<char,int>::iterator it;
	for(int i=0;i<7;i++)
		a.insert(make_pair(char(i+65),0));
	while(1){
		string N; int check=0;
		cin >> N;
		for(int i=0;i<N.size();i++)
		{
			//cout << N[i];
			if(N[i]=='!'){
				check =1 ;
				break;
			}
			else{
				//cout << "gogo";
				a.find(N[i])->second++;
			}
		}
		if(check==1)	break;
	}
	for(it=a.begin();it!=a.end();it++)
	{
		cout << it->first << " " << it->second << endl;
	}
	
}
