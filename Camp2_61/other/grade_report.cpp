#include<bits/stdc++.h>
using namespace std;
char grade[7] = {'F','D','C','B','A','W','\0'};
struct Student{
	int code;
	string name;
	string lastname;
	int number_of_sub;
	pair<int,int> sub_score[10];

};
struct Subject{
	string name;
	int grade;
};
int main()
{
    int peo,noname,sub;
    scanf("%d",&peo);
    Student stu[peo];
    for(int i=0;i<peo;i++){
		int c,s;
		scanf("%d %d",&stu[i].code,&stu[i].number_of_sub);
		for(int j=0;j<stu[i].number_of_sub;j++){
			scanf("%d %d",&stu[i].sub_score[j].first,&stu[i].sub_score[j].second);
			if(stu[i].sub_score[j].second==-1)	stu[i].sub_score[j].second = 5;
		}
    }
    scanf("%d",&noname);
	for(int i=0;i<noname;i++){
		string namef,names;
		int c;
		scanf("%d",&c);
		cin >> namef >> names;
		for(int j=0;j<peo;j++){
			if(stu[j].code==c){
				stu[j].name = namef;
				stu[j].lastname = names;
				break;
			}
		}
	}
	scanf("%d",&sub);
	Subject subb[1000];
	for(int i=0;i<sub;i++){
		int c,g;
		string names;
		scanf("%d",&c);
		cin >> subb[c].name;
		scanf("%d",&subb[c].grade);
		//cout << c << " " << subb[c].name << " " << subb[c].grade << endl;
	}
	
	for(int i=0;i<peo;i++){
		printf("%d ",stu[i].code);
		cout << stu[i].name << " " << stu[i].lastname << endl;
		int sum = 0;
		for(int j=0;j<stu[i].number_of_sub;j++){
			cout << stu[i].sub_score[j].first << " " << subb[stu[i].sub_score[j].first].name << " " << grade[stu[i].sub_score[j].second] << endl;
			if(stu[i].sub_score[j].second==5) stu[i].sub_score[j].second=0;
			sum += stu[i].sub_score[j].second*subb[stu[i].sub_score[j].first].grade;
		}
		cout << sum << endl;
	}
}
