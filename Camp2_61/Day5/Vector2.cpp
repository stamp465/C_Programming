#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a,even,odd;
    srand(time(NULL));
    int allnum = rand()%11 + 10;
    printf("--- Random Numbers [%d] ---\n",allnum);
    while(allnum--)
    {
        int n = rand()%101;
        cout << n << " ";
        if(n%2==0)  even.push_back(n);
        else        odd.push_back(n);
    }   cout << endl;
    printf("--- Even Vector [%d] ---\n",even.size());
    for(int i=even.size()-1;i>=0;i--)   cout << even[i] << " ";     cout << endl;
    printf("--- Odd Vector [%d] ---\n",odd.size());
    for(int i=odd.size()-1;i>=0;i--)    cout << odd[i] << " ";      cout << endl;
    reverse(even.begin(),even.end());
    reverse(odd.begin(),odd.end());
    while(1)
    {
        if(even.back()>odd.back()){
            odd.pop_back();
            if(!odd.empty()){
                cout << "===> Even is the winner!" << endl;
                return 0;
            }
        }
        else{
            even.pop_back();
            if(!even.empty()){
                cout << "===> Odd is the winner!" << endl;
                return 0;
            }
        }
    }
}
