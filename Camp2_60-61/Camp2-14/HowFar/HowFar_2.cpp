#include<bits/stdc++.h>
using namespace std;
class Num{
public :
    int num;
    int pos;
    Num(int num,int pos){
        this->num = num;
        this->pos = pos;
    };
};

struct Numoperator{
    bool operator()(const Num&n1, const Num&n2){
        return n1.num < n2.num;
    };
};

vector<Num> vec;
int main()
{
    int N;
    scanf("%d",&N);
    vec.reserve(N+5);
    for(int i=0;i<N;i++){
    	int num;
    	scanf("%d",&num);
    	vec.push_back(Num(num,i));
	}
	sort(vec.begin(),vec.end(),Numoperator());
	vec.push_back(Num(-2, -1));
	int curr = -1;
	int min_i = INT_MAX;
	int max_i = -1;
	int min_pos = INT_MAX;
	int max_pos = -1;
    for(int i=0;i<N;i++){
        Num num = vec.at(i);
        if(num.num != curr){
            curr = num.num;
            min_pos = max_pos = num.pos;
            min_i = max_i = i;
        }
        else {
            max_i = i;
            min_pos = min(min_pos,num.pos);
            max_pos = max(max_pos,num.pos);
        }
        if(curr != vec.at(i+1).num){
            int a = abs(min_i - max_pos);
            int b = abs(max_i - min_pos);
            printf("%d %d\n", curr, max(a, b));
        }
    }
    return 0;
}

