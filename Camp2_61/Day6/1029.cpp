#include<bits/stdc++.h>
using namespace std;
int ans;
vector<int> a;
vector<int>::iterator it;
void go(int start,int endd,int show){
    int mid=(start+endd)/2;
    if(a[mid]<=show && show<a[mid+1]){
        ans=a[mid+1]-a[mid];
        printf("%d\n",ans);
        //return ;
    }
    else if(show<a[mid])    go(start,mid,show);
    else if(show>a[mid])    go(mid,endd,show);
}

int main()
{
	int N,M,Q;
	scanf("%d %d %d",&N,&M,&Q);
	a.push_back(1);
	a.push_back(N+1);
	for(int i=0;i<M;i++)
	{
		int f,p;
		scanf("%d %d",&f,&p);
		int d = f+p;
		if(f+p>N+1)	d = N+1;
		if(f!=1)	a.push_back(f);
		if(d!=N+1)	a.push_back(d);
	}
	sort(a.begin(),a.end());
	for(int i=1;i<a.size()-2;i++)
	{
		if(a[i]==a[i+1]){
			a[i]=0;
			a[i+1]=0;
			i++;
		}
	}
	sort(a.begin(),a.end());
	//for(it=a.begin();it!=a.end();it++) cout << *it << " ";
	//cout << endl;
	for(int j=0;j<Q;j++)
	{
		int show;
		scanf("%d",&show);
		go(0,a.size(),show);
		/*for(it=a.begin();it!=a.end();it++)
		{
			//cout << *it << " ";
			if(*it>show){
				int a = *it;
				it--;
				printf("%d\n",a-*it);
				break;
			}
		}
		//cout << endl;
		/*if(it==a.end()){
			//cout << show << " " << N << endl;
			if(show<=N)	cout << N << endl;
			else		cout << "0\n";
		}*/
	}
}
