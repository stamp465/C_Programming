#include<bits/stdc++.h>
using namespace std;

char arr[10000][2000];
int A=0,B=0,C=0;
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=0;i<M;i++){
        scanf("%s",&arr[i]);
    }

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            //printf("%c ",arr[i][j]);
            if(arr[i][j]=='1'&&(arr[i][j-1]=='0'||j==0)&&( i==0||(arr[i-1][j+1]=='0'&&arr[i-1][j]=='0') )){
                if(i==25&&j==10){
                    for(int k=0;k<2;k++){
                        for(int l=0;l<2;l++){
                            printf("%c ",arr[i+k][j+l]);
                        }
                        printf("\n");
                    }
                }
                printf("...%c %c\n",arr[i+1][j+1],arr[i][j+1]);
                if(arr[i][j+1]=='1'&&arr[i+1][j]=='1'&&arr[i+1][j+1]=='1'){
                    cout << "1" << endl;
                    A++;
                }
                else if(arr[i+1][j]=='1'&&arr[i+1][j-1]=='1'&&arr[i+1][j-1]=='1'&&j>0){
                    cout << "2" << endl;
                    int nubi = 0;
                    for(int k=0;i+k<M;k++){
                        if(arr[i+k][j]=='1'){
                            nubi++;
                        }
                        else{
                            break;
                        }
                    }
                    if((arr[i+nubi-1][j+1]=='1'&&j+1<M)||((arr[i+nubi-1][j-1]=='1'&&j-1>=0)) ){
                        C++;
                    }
                    else{
                        B++;
                    }
                    //printf("%d\n",nubi);
                }
                else if(arr[i+1][j]=='1'&&arr[i+1][j-1]=='1'&&i+1<N&&j-1>=0){
                    cout << "3" << endl;
                    C++;
                }

                else if(arr[i+1][j+1]=='1'&&arr[i+1][j]=='1'&&i+1<N&&j+1<M){
                    cout << "4" << endl;
                    C++;
                }
                else if(arr[i][j+1]=='1'&&arr[i+1][j+1]=='1'&&i+1<N&&j+1<M){
                    cout << "5" << endl;
                    C++;    //cout << "plus C" << endl;
                }
                else{
                    cout << "6" << endl;
                }
                printf("%d %d %d ... %d %d\n",A,B,C,i,j);
            }
        }

        //printf("\n");
    }

}
