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
        int num,ch,check=0;
        cin >> num >> ch;
        ch--;
        if(num==-1){
            for(int i=0;i<9;i++){
                if(arr[ch][i]!=0)   {
                    cout << arr[ch][i] << " ";
                    check = 1;
                }
            }
            if(check==0){
                cout << "0";
            }
            cout << endl;
        }
        else if(num==1){
            for(int i=0;i<9;i++){
                if(arr[i][ch]!=0)  {
                        cout << arr[i][ch] << " ";
                        check=1;
                }
            }
            if(check==0){
                cout << "0";
            }
            cout << endl;
        }
        else if(num==0){
            ch++;
            if(ch==1){
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        if(arr[i][j]!=0)  {
                                cout << arr[i][j] << " ";
                                check = 1;
                        }
                    }
                }
            }
            if(ch==2){
                for(int i=0;i<3;i++){
                    for(int j=3;j<6;j++){
                        if(arr[i][j]!=0)   {
                                cout << arr[i][j] << " ";
                                check = 1;
                        }}
                }
            }
            if(ch==3){
                for(int i=0;i<3;i++){
                    for(int j=6;j<9;j++){
                        if(arr[i][j]!=0)   {
                                cout << arr[i][j] << " ";
                                check = 1;
                        }}
                }
            }
            if(ch==4){
                for(int i=3;i<6;i++){
                    for(int j=0;j<3;j++){
                        if(arr[i][j]!=0)   {
                                cout << arr[i][j] << " ";
                                check = 1;
                        }}
                }
            }
            if(ch==5){
                for(int i=3;i<6;i++){
                    for(int j=3;j<6;j++){
                        if(arr[i][j]!=0)   {
                                cout << arr[i][j] << " ";
                                check = 1;
                        }}
                }
            }
            if(ch==6){
                for(int i=3;i<6;i++){
                    for(int j=6;j<9;j++){
                        if(arr[i][j]!=0)   {
                                cout << arr[i][j] << " ";
                                check = 1;
                        }}
                }
            }
            if(ch==7){
                for(int i=6;i<9;i++){
                    for(int j=0;j<3;j++){
                        if(arr[i][j]!=0)   {
                                cout << arr[i][j] << " ";
                                check = 1;
                        }}
                }
            }
            if(ch==8){
                for(int i=6;i<9;i++){
                    for(int j=3;j<6;j++){
                        if(arr[i][j]!=0)   {
                                cout << arr[i][j] << " ";
                                check = 1;
                        }}
                }
            }
            if(ch==9){
                for(int i=6;i<9;i++){
                    for(int j=6;j<9;j++){
                        if(arr[i][j]!=0)   {
                                cout << arr[i][j] << " ";
                                check = 1;
                        }}
                }
            }
            if(check==0){
                cout << "0";
            }
            cout << endl;
        }

    }
}
