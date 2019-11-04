#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    float score[N][3],total[N],mid=0,sc=0,fin=0,minmid=10000,minsc=10000,minfin=10000,mintotal=10000,maxmid=-10,maxsc=-10,maxfin=-10,maxtotal=-10,sd[N];
    for(int i=0;i<N;i++)
    {
        total[i] = 0;
        for(int j=0;j<3;j++)
        {
            cin >> score[i][j];
            total[i] += score[i][j];
            if(j==0&&score[i][j]>60)
            {
                cout << "score student " << i << " error" << endl;
                return 0;
            }
            if(j==1&&score[i][j]>20)
            {
                cout << "midterm score student " << i << " error" << endl;
                return 0;
            }
            if(j==2&&score[i][j]>20)
            {
                cout << "final score student " << i << " error" << endl;
                return 0;
            }
        }
    }

    for(int i=0;i<N;i++)
    {
        sc += score[i][0];
        if(score[i][0]<minsc)
            minsc = score[i][0];
        if(score[i][0]>maxsc)
            maxsc = score[i][0];
        mid += score[i][1];
        if(score[i][0]<minmid)
            minmid = score[i][0];
        if(score[i][0]>maxmid)
            maxmid = score[i][0];
        fin += score[i][2];
        if(score[i][0]<minfin)
            minfin = score[i][0];
        if(score[i][0]>maxfin)
            maxfin = score[i][0];
        if(total[i]<mintotal)
            mintotal = total[i];
        if(total[i]>maxtotal)
            maxtotal = total[i];
    }
        sc /= N;
        mid /= N;
        fin /= N;

    float avgg=0;
    for(int i=0;i<N;i++)
    {
        avgg += total[i];
    }
    avgg /= N;
    for(int i=0;i<N;i++)
	{
		sd[i] = (total[i]-(avgg))*(total[i]-(avgg));
		sd[i] = sqrt(sd[i]/(N-1));

	}
	cout << "Avg. score = " << sc << "\tMax score = " << maxsc << "\tMin score = " << minsc << endl;
	cout << "Avg. midterm score = " << mid << "\tMax midterm score = " << maxmid << "\tMin midterm score = " << minmid << endl;
	cout << "Avg. final score = " << fin << "\tMax final score = " << maxfin << "\tMin final score = " << minfin << endl;
	cout << "Avg. total score = " << avgg << "\tMax total score = " << maxtotal << "\tMin total score = " << mintotal << endl;
	for(int i=0;i<N;i++)
	{
		cout << "S.D. No " << i+1 << " Student = " << sd[i] << endl;

	}
}
