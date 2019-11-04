#include<bits/stdc++.h>
using namespace std;
int arr[100000][10];
int maxarr[100000];
int main()
{
    int N,P;
    scanf("%d %d",&N,&P);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<P;j++){
            scanf("%d",&arr[i][j]);
            maxarr[i] += arr[i][j];
        }
    }
    int want[P],maxwant=0;
    for(int j=0;j<P;j++){
        scanf("%d",&want[j]);
        maxwant+=want[j];
    }
    for(int i=0;i<N;i++)
    {
        int countt=0;
        for(int j=0;j<P;j++)
        {
            if(arr[i][j]==want[j]) countt++;
        }
        if(countt==P){
            printf("%d\n",i+1);
            return 0;
        }
    }
    for(int i=0;i<N;i++)
    {
        if(want[0]-arr[i][0]>0)
        {
            for(int j=i+1;j<N;j++)
            {
                if(maxarr[i]+maxarr[j]==maxwant)
                {
                    int check = 0;
                    for(int k=0;k<P;k++)
                    {
                        if(arr[i][k]+arr[j][k]!=want[k])
                        {
                            check = 1;
                            break;
                        }
                    }
                    if(check==0)
                    {
                        printf("%d %d",i+1,j+1);
                        return 0;
                    }
                }
            }
        }
    }

    printf("NO");
}
