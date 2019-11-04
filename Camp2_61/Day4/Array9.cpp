#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    int c = a;
    if(b==0)    c = 1;
    else    b--;
    while(b>0)
    {
        c*=a;
        b--;
    }
    return c;
}
int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        vector<int> vec;
        string a;   int i,numf=0,nums=0;
        cin >> a;
        for(i=0;i<a.size();i++)
            if(a[i]==':')   break;
        for(int j=0;j<i;j++)
            numf += ((int)(a[j])-48)*power(10,(i-j)-1) ;
        //cout << numf << endl;
        for(int j=i+1;j<a.size();j++)
            nums += ((int)(a[j])-48)*power(10,(a.size()-j)-1) ;
        //cout << nums << endl;
        for(int j=1;j<=numf;j++)
        {
            vec.push_back(j);
        }
        i=1;
        while(1)
        {
            if(i==nums){
                cout << *vec.begin();
                vec.erase(vec.begin());
                if(vec.empty()) {
                    cout << endl;
                    break;
                }
                cout << "->" ;
            }
            vec.push_back(vec[0]);
            vec.erase(vec.begin());
            i++;
            if(i>nums) i=2;
        }
    }
}
