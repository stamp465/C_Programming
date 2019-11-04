#include<bits/stdc++.h>
using namespace std;
int checka[100001];
int checkb[100001];
int main()
{
    ios_base::sync_with_stdio(0);   cin.tie(0);
    string a,b;
    int N,can=0,cana = 0,canb=0;
    cin >> N;
    cin >> a;
    cin >> b;
    for(int i=0;i<N;i++){
        int ch=0,save;
        for(int j=0;j<N;j++){
            if(b[i]==a[j]&&checkb[i]==0&&checka[j]==0&&b[i]!='?'){
                can++;
                checka[j]=1;
                checkb[i]=1;
                ch = 1;
                break;
            }
        }
        if(ch==0){

        }
    }
    /*for(int i=0;i<N;i++){
        if(a[i]=='?')   cana++;
        if(b[i]=='?')   canb++;
    }
    if(cana>canb)   can += cana;
    else            can += canb;*/
    for(int i=0;i<N;i++){
        int ch=0,save;
        if(b[i]=='?'&&checkb[i]==0)
        for(int j=0;j<N;j++){
            if(checka[j]==0&&a[j]!='?'){
                can++;
                checka[j]=1;
                checkb[i]=1;
                ch = 1;
                break;
            }
        }
        if(ch==0){

        }
    }

    for(int i=0;i<N;i++){
        int ch=0,save;
        if(a[i]=='?'&&checka[i]==0)
        for(int j=0;j<N;j++){
            if(checkb[j]==0&&b[j]!='?'){
                can++;
                checka[j]=1;
                checkb[i]=1;
                ch = 1;
                break;
            }
        }
        if(ch==0){

        }
    }

    for(int i=0;i<N;i++){
        int ch=0,save;
        if(checkb[i]==0)
        for(int j=0;j<N;j++){
            if(b[i]==a[j]&&checkb[i]==0&&checka[j]==0){
                can++;
                checka[j]=1;
                checkb[i]=1;
                ch = 1;
                break;
            }
        }
        if(ch==0){

        }
    }

    cout << can << endl;
}

