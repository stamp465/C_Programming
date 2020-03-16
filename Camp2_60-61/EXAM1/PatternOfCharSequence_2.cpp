#include<bits/stdc++.h>
using namespace std;
int main()
{
    int go=0,j,check=0;
    string a,c1,c2,ans,b,checkk;
    cin >> a;
    for(int i=0;i<a.size();i++)
    {
        for(j=0;j<b.size();j++)
        {
            if(b[j]==a[i]){
                check=1;
                break;
            }
        }
        if(check==1)    break;
        else{
            b.push_back(a[i]);
        }
    }
    //cout << b;
    //cout << ans << go << endl;
    if(b.size()==a.size())  cout << "INVALID";
    else{
        if(j==0)    ans = "=";
        else if(b.size()%2==0){
            if(j>b.size()/2)   {   ans = ">";  go = b.size()-j; }
            else               {   ans = "<";  go = j;   }
        }
        else{
            if(j>b.size()/2)   {   ans = ">";  go = b.size()-j; }
            else               {   ans = "<";  go = j;   }
        }
        //cout << ans << go << endl;
        int start=b.size(),check=1;
        //cout << start << endl;
        while(1)
        {
            //cout << "0" << start << a.size();
            if(start>a.size())    break;
            if(ans=="<"){
                for(int ch=start;ch<start+b.size()&&ch<a.size();ch++)
                {
                    cout << a[ch];
                    //cout << "a";
                    if(a[ch]==b[((ch%b.size())+go*check)%b.size()]){

                    }
                    else   {
                        //cout << a[ch] << b[((ch%b.size())+go*check)%b.size()];
                        cout << "INVALID";
                        return 0;
                    }
                }
            }
            else if(ans==">"){
                for(int ch=start;ch<start+b.size()&&ch<a.size();ch++)
                {
                    cout << a[ch];
                    //cout << "b";
                    if(a[ch]==b[((ch%b.size())+b.size()-go*check)%b.size()]){

                    }
                    else   {
                        //cout << a[ch] << b[((ch%b.size())+go*check)%b.size()];
                        cout << "INVALID";
                        return 0;
                    }
                }
            }
            else if(ans=="="){
                for(int ch=start;ch<start+b.size()&&ch<a.size();ch++)
                {
                    cout << a[ch];
                    if(a[ch]==b[ch%b.size()]){

                    }
                    else   {
                        //cout << a[ch] << b[((ch%b.size())+go*check)%b.size()];
                        cout << "INVALID";
                        return 0;
                    }
                }
            }
            cout << endl;
            check++;
            start+=b.size();
        }
    }
    cout << b << endl;
    if(j!=0)    cout << ans << " " << go;
    if(j==0)    cout << ans;

}


