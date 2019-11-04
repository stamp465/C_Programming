#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    double arr1[N],arr2[N],sum=0;
    for(int i=0;i<N;i++)    cin >> arr1[i];
    for(int i=0;i<N;i++)    cin >> arr2[i];
    for(int i=0;i<N;i++)    sum += (arr1[i]+arr2[i])*(arr1[i]+arr2[i]);
    printf("%.2f",sum);
}

