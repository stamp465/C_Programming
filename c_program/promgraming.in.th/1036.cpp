#include<bits/stdc++.h>
using namespace std;
int price[20000],work[20000][10],N;
int minn=1000000;
bool check1(int check[],int k)
{
	
	for(int i=0;i<k;i++)
	{
		if(check[i]==0)	return false;
	}
	return true;
}
void shop(int n,int k,int i,int check[],int choose,int sell)
{
	//cout << "n=..." << n << endl;
	sell += price[i];
	//cout << i << " " << sell << " ";
	for(int j=0;j<k;j++)
	{
		check[j] += work[i][j];
	}
	if(choose==n)
	{
		//cout << n << " " << i << " " << sell << " " << choose << endl;
		if(check1(check,k)==true)
		{
			
			if(sell < minn)	minn = sell;
		}
		
	}
	else if(choose<N)
	{
		for(int j=i+1;j<=N-n+choose;j++){
			//cout << "choose   " ;
			//cout << n << " " << i << " " << sell << " " << choose << endl;
			shop(n,k,i+1,check,choose+1,sell);
		}
	}
}


int main()
{
	int n,k;
	cin >> n >> k;
	N=n;
	for(int i=0;i<n;i++)
	{
		cin >> price[i];
		for(int j=0;j<k;j++)
		{
			cin >> work[i][j];
		}
	}
	int checkn[k] = {0};
	//for(int i=0;i<k;i++)	cout << check[i] << " ";
	while(n--)
	{
		int choose=0;
		//cout << "change n//////////////////" << n+1 << endl;;
		for(int j=0;j<N-n;j++){
			for(int i=0;i<k;i++)	checkn[i]=0;
			shop(n+1,k,j,checkn,choose+1,0);
			//cout << j << " ";
		}
		//cout << endl;
	}
	cout << minn ;
}
