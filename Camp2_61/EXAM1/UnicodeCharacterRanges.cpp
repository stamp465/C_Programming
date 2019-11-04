#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,ch;
    cin >> a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=','){
            ch.push_back(a[i]);
        }
        else{
            //cout << ch;
            if(ch.compare("0020")>=0&&ch.compare("007F")<=0)    cout << "BASIC LATIN\n";
            else if(ch.compare("0600")>=0&&ch.compare("06FF")<=0)    cout << "ARABIC\n";
            else if(ch.compare("0E00")>=0&&ch.compare("0E7F")<=0)    cout << "THAI\n";
            else if(ch.compare("0E80")>=0&&ch.compare("0EFF")<=0)    cout << "LAO\n";
            else if(ch.compare("3040")>=0&&ch.compare("309F")<=0)    cout << "HIRAGANA\n";
            else if(ch.compare("30A0")>=0&&ch.compare("30FF")<=0)    cout << "KATAKANA\n";
            else cout << "UNKNOWN\n";
            ch.clear();
        }
        if(i==a.size()-1){
            if(ch.compare("0020")>=0&&ch.compare("007F")<=0)    cout << "BASIC LATIN\n";
            else if(ch.compare("0600")>=0&&ch.compare("06FF")<=0)    cout << "ARABIC\n";
            else if(ch.compare("0E00")>=0&&ch.compare("0E7F")<=0)    cout << "THAI\n";
            else if(ch.compare("0E80")>=0&&ch.compare("0EFF")<=0)    cout << "LAO\n";
            else if(ch.compare("3040")>=0&&ch.compare("309F")<=0)    cout << "HIRAGANA\n";
            else if(ch.compare("30A0")>=0&&ch.compare("30FF")<=0)    cout << "KATAKANA\n";
            else cout << "UNKNOWN\n";
        }
    }
}
