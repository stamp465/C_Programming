#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int>::iterator it;
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++)
    {
        int num;
        scanf("%d",&num);
        a.push_back(num);
    }
    for(int i=0;i<M;i++)
    {
        char ch[2];
        scanf("%s",ch);
        if(ch[0]=='a'){
            int x,y;
            scanf("%d %d",&x,&y);
            if(a[x-1]!=a[y-1])  swap(a[x-1],a[y-1]);
        }
        else if(ch[0]=='b'){
            int x,y;
            scanf("%d %d",&x,&y);
            a[x-1] = y;
        }
        else if(ch[0]=='c'){
            int x,y;
            scanf("%d",&x);
            int st_ = x,en_=N-1;
            int _st = x-1,_en=0;
            while(1){
                if(st_>=en_&&_st<=_en)  break;
                if(st_<en_){
                    swap(a[st_],a[en_]);
                    st_++;
                    en_--;
                }
                if(_st>_en){
                    swap(a[_st],a[_en]);
                    _st--;
                    _en++;
                }
            }
            //if(x!=1)    reverse(a.begin(),a.begin()+x);
            //reverse(a.begin()+x,a.end());
            /*for(int i=0;i<a.size();i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;*/
        }
        else if(ch[0]=='q'){
            int x,y;
            scanf("%d",&x);
            printf("%d\n",a[x-1]);
        }
    }
}
