#include<bits/stdc++.h>
using namespace std;
int main()
{
    int go=0;
    string a,c1,c2,ans,b,checkk;
    cin >> a;
    vector<char>::iterator it;
    for(int i=0;i<a.size();i++)
    {
        int check=0,j;
        for(j=0;j<b.size();j++)
        {
            if(b[j]==a[i]){
                check=1;
                break;
            }
        }
        if(check==1){
            if(j==0)    ans = "=";
            else{
                int ch = 0,chh=0;
                checkk = b;
                for(int i=0;i<b.size();i++) checkk.push_back(b[i]);
                while(1){
                    if(ch==a.size()-1)  break;
                    for(int k=0;k<b.size();k++)
                    {
                        //cout << "non..." << a[ch] << checkk[k] << endl;
                        if(a[ch]==checkk[k]){
                            //cout << a[ch] << checkk[k] << endl;
                            if(a[ch+1]!=checkk[k+1]&&ch%b.size()!=b.size()-1){
                                //cout << a[ch+1] << checkk[k+1] << endl;
                                chh=1;
                                go=-1;
                                break;
                            }
                            break;
                        }
                    }
                    ch++;
                    if(chh==1)  break;
                }
                if(chh==1)   break;
                else{
                    if(b.size()%2==0){
                        if(j>b.size()/2)   {   ans = ">";  go = b.size()-j; }
                        else                {   ans = "<";  go = j;   }
                    }
                    else{
                        if(j>b.size()/2)    {   ans = ">";  go = b.size()-j; }
                        else                {   ans = "<";  go = j;   }
                    }
                }
            }

            break;
        }
        else{
            b.push_back(a[i]);
        }
    }
    if(go!=-1)  cout << b << endl;
    if(go==0)   cout << ans;
    else if(go==-1) cout << "INVALID";
    else        cout << ans << " " << go;
}

