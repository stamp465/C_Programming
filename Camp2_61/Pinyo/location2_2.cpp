#include<cstdio>
int arr[301][1001];
//using namespace std;
int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int want,maxx=0,countt=0;
    scanf("%d",&want);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            if(i<=want&&j<=want){
                scanf("%d",&arr[i][j]);
                arr[i][j] += arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
                if(i>=want&&j>=want){
                    /*if(maxx<arr[i][j]-arr[i-want][j]-arr[i][j-want]+arr[i-want][j-want]){
                        maxx = arr[i][j]-arr[i-want][j]-arr[i][j-want]+arr[i-want][j-want];
                        countt=1;
                    }
                    else if(maxx==arr[i][j]-arr[i-want][j]-arr[i][j-want]+arr[i-want][j-want]){
                        countt++;
                    }*/
                    if(maxx<arr[i][j]){
                        maxx = arr[i][j];
                        countt = 1;
                    }
                }
            }
            else{
                int wi = i%(want+1);
                //if(i%(want+1)==0)   wi = want+1;
                scanf("%d",&arr[wi][j]);
                int wi_ = wi-1;
                if(wi-1==-1) wi_ = want;
                arr[wi][j] += arr[wi_][j] + arr[wi][j-1] - arr[wi_][j-1];
                if(i>=want&&j>=want){
                    int go = wi+1;
                    if(go>want)   go = 0;
                    if(maxx<arr[wi][j]-arr[wi][j-want]-arr[go][j]+arr[go][j-want]){
                        maxx = arr[wi][j]-arr[wi][j-want]-arr[go][j]+arr[go][j-want];
                        countt=1;
                    }
                    else if(maxx==arr[wi][j]-arr[wi][j-want]-arr[go][j]+arr[go][j-want]){
                        countt++;
                    }
                }

            }
        }
    }
    printf("%d %d\n",maxx,countt);
}

