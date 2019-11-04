#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		double num,maxx=0,power=30;
		cin >> num;

		while(1)
		{
			//cout << power;
			double numch = floor(pow(num,(1/power))+0.5);
			double a = floor (pow(numch,power)+0.5);
			//printf("numch = %.0lf a = %.0lf\n",numch,a);
			if(a==num)	{
				//cout << power << endl;
				maxx = power;
				break;
			}
			power--;
			if(power==1)	break;
		}
		if(maxx==0)	cout << "NO" << endl;
		else		cout << maxx << endl;
	}
}
