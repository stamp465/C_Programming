#include<bits/stdc++.h>
using namespace std;
int arr[9][9];

int main()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int N;
    cin >> N;
    for(int o=0;o<N;o++){
        int num,ch;
        cin >> num >> ch;
        ch--;
        if(num==-1){
            int check[10] = {0};
            int check2[10] = {0};
            int cum = 0;
            for(int i=0;i<9;i++){
                if(arr[ch][i]!=0)  {
                    if(check[arr[ch][i]]==0)    check[arr[ch][i]]=1;
                    else{
                        cum = 1;
                        check2[arr[ch][i]]=1;
                    }
                        //cout << arr[ch][i] << " ";
                }
            }
            if(cum==0)  cout << "0";
            else{
                for(int i=0;i<10;i++){
                    if(check2[i]==1)    cout << i << " ";
                }
            }
            cout << endl;
        }
        else if(num==1){
            int check[10] = {0};
            int check2[10] = {0};
            int cum = 0;
            for(int i=0;i<9;i++){
                if(arr[i][ch]!=0)  {
                    if(check[arr[i][ch]]==0)    check[arr[i][ch]]=1;
                    else{
                        cum = 1;
                        check2[arr[i][ch]]=1;
                    }
                        //cout << arr[ch][i] << " ";
                }
            }
            if(cum==0)  cout << "0";
            else{
                for(int i=0;i<10;i++){
                    if(check2[i]==1)    cout << i << " ";
                }
            }
            cout << endl;
        }
        else if(num==0){
            ch++;
            int check[10] = {0};
            int check2[10] = {0};
            int cum = 0;
            if(ch==1){
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        //if(arr[i][j]!=0)   cout << arr[i][j] << " ";
                        if(arr[i][j]!=0)  {
                            if(check[arr[i][j]]==0)    check[arr[i][j]]=1;
                            else{
                                cum = 1;
                                check2[arr[i][j]]=1;
                            }
                        }
                    }
                }
            }
            if(ch==2){
                for(int i=0;i<3;i++){
                    for(int j=3;j<6;j++){
                        //if(arr[i][j]!=0)   cout << arr[i][j] << " ";
                        if(arr[i][j]!=0)  {
                            if(check[arr[i][j]]==0)    check[arr[i][j]]=1;
                            else{
                                cum = 1;
                                check2[arr[i][j]]=1;
                            }
                        }
                    }
                }
            }
            if(ch==3){
                for(int i=0;i<3;i++){
                    for(int j=6;j<9;j++){
                        //if(arr[i][j]!=0)   cout << arr[i][j] << " ";
                        if(arr[i][j]!=0)  {
                            if(check[arr[i][j]]==0)    check[arr[i][j]]=1;
                            else{
                                cum = 1;
                                check2[arr[i][j]]=1;
                            }
                        }
                    }
                }
            }
            if(ch==4){
                for(int i=3;i<6;i++){
                    for(int j=0;j<3;j++){
                        //if(arr[i][j]!=0)   cout << arr[i][j] << " ";
                        if(arr[i][j]!=0)  {
                            if(check[arr[i][j]]==0)    check[arr[i][j]]=1;
                            else{
                                cum = 1;
                                check2[arr[i][j]]=1;
                            }
                        }
                    }
                }
            }
            if(ch==5){
                for(int i=3;i<6;i++){
                    for(int j=3;j<6;j++){
                        //if(arr[i][j]!=0)   cout << arr[i][j] << " ";
                        if(arr[i][j]!=0)  {
                            if(check[arr[i][j]]==0)    check[arr[i][j]]=1;
                            else{
                                cum = 1;
                                check2[arr[i][j]]=1;
                            }
                        }
                    }
                }
            }
            if(ch==6){
                for(int i=3;i<6;i++){
                    for(int j=6;j<9;j++){
                        //if(arr[i][j]!=0)   cout << arr[i][j] << " ";
                        if(arr[i][j]!=0)  {
                            if(check[arr[i][j]]==0)    check[arr[i][j]]=1;
                            else{
                                cum = 1;
                                check2[arr[i][j]]=1;
                            }
                        }
                    }
                }
            }
            if(ch==7){
                for(int i=6;i<9;i++){
                    for(int j=0;j<3;j++){
                        //if(arr[i][j]!=0)   cout << arr[i][j] << " ";
                        if(arr[i][j]!=0)  {
                            if(check[arr[i][j]]==0)    check[arr[i][j]]=1;
                            else{
                                cum = 1;
                                check2[arr[i][j]]=1;
                            }
                        }
                    }
                }
            }
            if(ch==8){
                for(int i=6;i<9;i++){
                    for(int j=3;j<6;j++){
                        //if(arr[i][j]!=0)   cout << arr[i][j] << " ";
                        if(arr[i][j]!=0)  {
                            if(check[arr[i][j]]==0)    check[arr[i][j]]=1;
                            else{
                                cum = 1;
                                check2[arr[i][j]]=1;
                            }
                        }
                    }
                }
            }
            if(ch==9){
                for(int i=6;i<9;i++){
                    for(int j=6;j<9;j++){
                        //if(arr[i][j]!=0)   cout << arr[i][j] << " ";
                        if(arr[i][j]!=0)  {
                            if(check[arr[i][j]]==0)    check[arr[i][j]]=1;
                            else{
                                cum = 1;
                                check2[arr[i][j]]=1;
                            }
                        }
                    }
                }
            }
            if(cum==0)  cout << "0";
            else{
                for(int i=0;i<10;i++){
                    if(check2[i]==1)    cout << i << " ";
                }
            }
            cout << endl;
        }

    }
}
