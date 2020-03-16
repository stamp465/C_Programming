#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int c1[4] = {0,0,1,-1};
int c2[4] = {1,-1,0,0};
bool check(int x,int y,int N){
    for(int i=0;i<4;i++){
        if(x+c1[i]>=1&&x+c1[i]<=N&&y+c2[i]>=1&&y+c2[i]<=N){
            //cout << x+c1[i] << " " << y+c2[i] << endl;
            if(arr[x+c1[i]][y+c2[i]]==0){
                return true;
            }
        }
    }
    return false;
}


int main(){
    int N;
    scanf("%d",&N);
    int a=2,savei=1,savej=1,countt=1;
    arr[savei][savej] = countt;
    countt++;
    if(check(savei,savej,N)==true)
    while(1){
        //cout << "go" << a << endl;
        if(a==1){
                //cout << "a=1";
            if(arr[savei-1][savej]!=0){
                a = 2;

            }
            else{
                for(int j=1;j<=N;j++){
                    if(arr[savei-j][savej]!=0||savei-j<1){
                        arr[savei-j+1][savej]   = countt;
                        savei = savei-j+1;
                        countt++;
                        break;
                    }
                }
                a = 2;

            }
        }
        else if(a==2){
            //cout << "a=2";
            if(arr[savei][savej+1]!=0){
                //cout << "con";
                a = 3;

            }
            else{
                //cout << "tan";
                for(int j=1;j<=N;j++){
                    if(arr[savei][savej+j]!=0||savej+j>N){
                        //cout << "tan" << savej << " " << j << endl;
                        arr[savei][savej+j-1]   = countt;
                        savej = savej+j-1;
                        //cout << "save j = " << savej << endl;
                        countt++;
                        break;
                    }
                }
                a = 3;
                //cout << savei << " " << savej << " " << a << endl;
            }
        }
        else if(a==3){
            //cout << "a=3";
            if(arr[savei+1][savej]!=0){
                a = 4;

            }
            else{
                for(int j=1;j<=N;j++){
                    if(arr[savei+j][savej]!=0||savei+j>N){
                        arr[savei+j-1][savej]   = countt;
                        savei = savei+j-1;
                        countt++;
                        break;
                    }
                }
                a = 4;

            }
        }
        else if(a==4){
            //cout << "a=4";
            if(arr[savei][savej-1]!=0){
                a = 1;

            }
            else{
                for(int j=1;j<=N;j++){
                    if(arr[savei][savej-j]!=0||savej-j<1){
                        arr[savei][savej-j+1]   = countt;
                        savej = savej-j+1;
                        countt++;
                        break;
                    }
                }
                a = 1;

            }
        }
        if(check(savei,savej,N)==false) {
                //cout << "false" << endl;
                break;
        }
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(arr[i][j]!=0)    printf("%d ",arr[i][j]%10);
            else                printf("? ");
        }
        printf("\n");
    }

}
