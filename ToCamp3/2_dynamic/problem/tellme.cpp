#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		string st1;
		string st2;
		cin >> st1 >> st2;
		int found = st2.find(st1);
		//cout << found << endl;
		if(found>=0){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
}
