#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    stack<char> check;
    for(int i=0;i<a.size();i++){
        //cout << a[i] << "..." << endl;
        if(a[i]=='('){
            check.push(a[i]);
        }
        else if(a[i]=='{'){
            check.push(a[i]);
        }
        else if(a[i]=='['){
            check.push(a[i]);
        }
        else if(a[i]=='<'){
            check.push(a[i]);
        }
        else if(a[i]=='"'){
            //cout << "find" << endl;
            if(check.empty()){
                //cout << "go";
                check.push(a[i]);
            }
            else{
                if(check.top()!='"'){
                    //cout << check.top() << " ";
                    //cout << "hey" << endl;
                    check.push(a[i]);
                }
                else{
                    //cout << "hoo" << endl;
                    check.pop();
                }
            }
        }
        else if(a[i]=='\''){
            if(check.empty()){
                check.push(a[i]);
            }
            else{
                if(check.top()!='\''){
                    check.push(a[i]);
                }
                else{
                    check.pop();
                }
            }
        }



        else if(a[i]==')'){
            if(check.top()!='('){
            if(check.empty()){
                cout << "Not Balance!";
                return 0;
            }
                cout << "Not Balance!";
                return 0;
            }
            else{
                check.pop();
            }
        }
        else if(a[i]=='}'){
            if(check.top()!='{'){
            if(check.empty()){
                cout << "Not Balance!";
                return 0;
            }
                cout << "Not Balance!";
                return 0;
            }
            else{
                check.pop();
            }
        }
        else if(a[i]==']'){
            if(check.top()!='['){
            if(check.empty()){
                cout << "Not Balance!";
                return 0;
            }
                cout << "Not Balance!";
                return 0;
            }
            else{
                check.pop();
            }
        }
        else if(a[i]=='>'){
            if(check.top()!='<'){
            if(check.empty()){
                cout << "Not Balance!";
                return 0;
            }
                cout << "Not Balance!";
                return 0;
            }
            else{
                check.pop();
            }
        }
        //if(!check.empty())   cout << check.top() << endl;
    }
    if(!check.empty())  cout << "Not Balance!";
    else                cout << "Balance!";
}
