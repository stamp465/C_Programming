#include<bits/stdc++.h>
using namespace std;
double a;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        double num;
        cin >> num;
        a += num;
    }
    printf("%.6f",a/N);
}
