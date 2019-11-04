#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    set<long int> sett;
    while(N--){
        long int num;
        scanf("%ld",&num);
        sett.insert(num);
    }
    printf("%d\n",sett.size());
}
