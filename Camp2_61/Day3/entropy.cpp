#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr[8] = {"A","B+","B","C+","C","D+","D","F"};
    double check[8] = {0},s=0;
    while(1){
        string a;
        cin >> a;
        if(a[0]=='Q')   break;
        else{
            for(int i=0;i<8;i++)
            {
                if(a==arr[i])   {
                    check[i]++;
                    s++;
                }
            }
        }
    }
    double all=0;
    for(int i=0;i<8;i++)
    {
        if(check[i]>0){
            //cout << check[i] << endl;
            all += (check[i]/s)*log2(check[i]/s);
        }
    }
    if(all!=0)  all*=-1;
    printf("%.2f",all);
}
