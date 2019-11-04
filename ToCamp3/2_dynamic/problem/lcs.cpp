#include<bits/stdc++.h>
using namespace std;

int main(){
	string st,s1,s2;
	int i=1;
	while(getline(cin,st)){
		if(i%2==1) 	s1 = st;
		else		s2 = st;
		if(i%2==0){
			int arr[s1.size()][s2.size()];
			for(int i=0;i<s1.size();i++){
				for(int j=0;j<s2.size();j++){
					if(s1[i]==s2[j]){
						if(i-1<0||j-1<0){
							arr[i][j] = 0 + 1;
						}
						else{
							arr[i][j] = arr[i-1][j-1] + 1;
						}
					}
					else{
						if(i-1<0||j-1<0){
							if(i-1<0&&j-1<0)	arr[i][j] = 0;
							else if(i-1<0)		arr[i][j] = arr[i][j-1]; 
							else				arr[i][j] = arr[i-1][j]; 
						}
						else{
							arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
						}
					}
				}
			}
			printf("%d\n",arr[s1.size()-1][s2.size()-1]);
		}
		i++;
	}
}
