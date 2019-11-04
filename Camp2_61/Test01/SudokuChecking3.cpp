#include<bits/stdc++.h>
using namespace std;
int arr[9][10];
int can[9][10];
int low[9][10];
int col[9][10];
int main()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(arr[i][j]!=0){
                low[i][arr[i][j]]=1;

            }
            if(arr[j][i]!=0){
                col[i][arr[j][i]] = 1;
                //printf("%d %d\n",i,arr[j][i]);
            }
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(arr[i][j]!=0){
                if(i<3&&j<3){
                    can[0][arr[i][j]] = 1;
                }
                else if(i<3&&j<6){
                    can[1][arr[i][j]] = 1;
                }
                else if(i<3&&j<9){
                    can[2][arr[i][j]] = 1;
                }

                else if(i<6&&j<3){
                    can[3][arr[i][j]] = 1;
                }
                else if(i<6&&j<6){
                    can[4][arr[i][j]] = 1;
                }
                else if(i<6&&j<9){
                    can[5][arr[i][j]] = 1;
                }

                else if(i<9&&j<3){
                    can[6][arr[i][j]] = 1;
                }
                else if(i<9&&j<6){
                    can[7][arr[i][j]] = 1;
                }
                else if(i<9&&j<9){
                    can[8][arr[i][j]] = 1;
                }

            }
        }
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++){
            if(arr[i][j]==0){
                printf("%d %d ",i+1,j+1);
                //cout << i << "..." << j << endl;
                for(int k=1;k<10;k++){
                    int ch1=0,ch2=0,ch3=0;

                    if(low[i][k]==0){
                        //
                        ch1 = 1;
                    }
                    if(col[j][k]==0){
                        //cout << k << endl;
                        //printf("\n%d %d\n",j,k);
                        ch2 = 1;
                    }

                    if(i<3&&j<3){
                        if(can[0][k]==0){
                            ch3 = 1;
                        }
                    }
                    else if(i<3&&j<6){
                        if(can[1][k]==0){
                            ch3 = 1;
                        }
                    }
                    else if(i<3&&j<9){
                        if(can[2][k]==0){
                            ch3 = 1;
                        }
                    }

                    else if(i<6&&j<3){
                        if(can[3][k]==0){
                            ch3 = 1;
                        }
                    }
                    else if(i<6&&j<6){
                        if(can[4][k]==0){
                            ch3 = 1;
                        }
                    }
                    else if(i<6&&j<9){
                        if(can[5][k]==0){
                            ch3 = 1;
                        }
                    }

                    else if(i<9&&j<3){
                        if(can[6][k]==0){
                            ch3 = 1;
                        }
                    }
                    else if(i<9&&j<6){
                        if(can[7][k]==0){
                            ch3 = 1;
                        }
                    }
                    else if(i<9&&j<9){
                        if(can[8][k]==0){
                            ch3 = 1;
                        }
                    }

                    if(ch1==1&&ch2==1&&ch3==1){
                        printf("%d ",k);
                        //low[i][k] = 1;
                        //col[i][k] = 1;

                    }
                }
                cout << endl;
            }
        }
    }
}


