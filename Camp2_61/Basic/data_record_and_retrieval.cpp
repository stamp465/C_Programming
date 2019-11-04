#include<bits/stdc++.h>
using namespace std;
struct student{
    string id;
    string name;
    string name2;
}stdd;
vector<student> vec[10000];
int main()
{
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        string a,b,c;
        int num;
        cin >> a >> b >> c >> num;
        stdd.id = a;
        stdd.name = b;
        stdd.name2 = c;
        vec[num].push_back(stdd);
    }
    int M;
    cin >> M;
    if(vec[M].size()==0){
        cout << "None";
        return 0;
    }
    for(int i=0;i<vec[M].size();i++){
        cout << vec[M][i].id << " " << vec[M][i].name << " " << vec[M][i].name2 << endl;
    }

}
