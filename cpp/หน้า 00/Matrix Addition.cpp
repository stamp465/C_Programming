#include<bits/stdc++.h>
using namespace std;
int a[200][200],b[200][200];
int main()
{
    int i,j;
    int m,n;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             printf("%d",b[i][j]+a[i][j]);
             printf(" ");
         }
         printf("\n");
     }
     /*#include<bits/stdc++.h>
using namespace std;
int m,n,a[1000000],i;
int main()
{

    scanf("%d %d",&m,&n);
    for(i=1;i<=2*m*n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=m*n;i++)
    {
        printf("%d",a[i]+a[m*n+1]);

        if(i%n==0)printf("\n");
        else printf(" ");
    }*/
}



