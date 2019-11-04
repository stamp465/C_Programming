#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	scanf("%d",&N);
	set<int> a;
	set<int>::iterator it;
	while(N--)
	{
		int ch,num;
		scanf("%d %d",&ch,&num);
		if(ch==1)
		{
			a.insert(num);
		}
		if(ch==2)
		{
			it = a.begin();
			int firstt=0;
			int endd = a.size()-1;
			int to=(firstt+endd)/2;
			advance(it,to);
			while(1)
			{
				if(*it==num)
				{
					printf("%d\n",to+1);
					break;
				}
				else if(*it>num)
				{
					endd = to;
					to=(firstt+endd)/2;
					if(to==endd) to--;	
					advance(it,-(endd-to));
				}
				else
				{
					firstt = to;
					to=(firstt+endd)/2;
					if(to==firstt) to++;	
					advance(it,to-firstt);
				}
			}
		}
	}
}
