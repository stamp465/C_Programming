#include<bits/stdc++.h>
using namespace std;

long int arr[28] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,153, 370, 371, 407,1634, 8208, 9474,54748, 92727, 93084,548834,1741725, 4210818, 9800817, 9926315,24678050, 24678051, 88593477};

int main(){
    long int st,en;
    scanf("%ld %ld",&st,&en);
    for(int i=0;i<28;i++){
        if(arr[i]>st&&arr[i]<en)  printf("%d ",arr[i]);
    }
}
