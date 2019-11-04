#include<bits/stdc++.h>
using namespace std;
struct Number{
		vector<int> start_end;
		int countt = 0;
		int dis = 0;
		int st = -1;

}a;
unordered_map<int,Number> mapp(100050);
vector<int> vec;
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
    	int num;
    	scanf("%d",&num);
    	mapp[num].start_end.push_back(i);
    	mapp.at(num).countt++;
		//printf("%d %d\n",mapp[num].start_end[0],mapp.at(num).countt);
    	vec.push_back(num);
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<N;i++){
		if(mapp[vec[i]].dis < abs(i-mapp[vec[i]].start_end[0]) )						mapp[vec[i]].dis = abs(i-mapp[vec[i]].start_end[0]);
		if(mapp[vec[i]].dis < abs(i-mapp[vec[i]].start_end[mapp[vec[i]].countt-1]) ) 	mapp[vec[i]].dis = abs(i-mapp[vec[i]].start_end[mapp[vec[i]].countt-1]);
		//cout << i << endl;
		if(mapp.at(vec[i]).st == -1){
			mapp.at(vec[i]).st = 1;
			//cout << i << endl;
			//printf("%d\n",mapp.at(vec[i]).st);
			i += mapp.at(vec[i]).countt-2;

			continue;
		}
		printf("%d %d\n",vec[i],mapp.at(vec[i]).dis);


	}
}
