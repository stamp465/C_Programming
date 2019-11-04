#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,char> a[7];
    int checkde=0;
    for(int i=0;i<7;i++)
    {
        a[i] = make_pair(0,char(i+65));
    }
    int check=0;
    int count = 0,max = -50000,save=-1;
    while(1)
    {
        string n;
        cin >> n;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]=='!'){
                check = 1;
                break;
            }
            else{
                for(int j=0;j<7;j++){
                    if(a[j].second==n[i]&&a[j].first!=50000)   a[j].first--;
                }
            }
        }
        if(check==1) break;
        sort(a,a+7);
        //for(int i=0;i<7;i++)
        //        cout << a[i].second << " " << a[i].first << endl;
        count = 0,max = -50000,save=-1;
        for(int i=0;i<7;i++){
            if(a[i].first>=max&&a[i].first!=50000)
            {
                //cout  << "max = " << max << " a[i].first = " << a[i].first << " a[i].second = " << a[i].second << endl;
                if(a[i].first==max) count++;
                if(a[i].first>max) {
                        save=i; count=0;
                }
                max = a[i].first;
                //cout  << "max = " << max << " save = " << save <<" count = "<< count << endl;
            }
        }

        if(count==0)
        if(checkde!=6)    {
                //cout << "haha" << save << endl;
                a[save].first=50000;
                checkde++;
        }
        /*for(int i=0;i<7;i++)
        {
            cout << a[i].second << " " << a[i].first << endl;
        }*/
    }


    cout << 7-checkde << endl;
    for(int i=0;i<7;i++)
    {
        if(a[i].first!=50000)
            cout << a[i].second << " " << a[i].first*-1 << endl;
    }
}
