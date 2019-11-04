#include<cstdio>
#include<algorithm>
int c[1000005];
using namespace std;
int main()
{
    int m,n,maxc=0;
    scanf("%ld %ld",&m,&n);
    int arr[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        sort(arr[i],arr[i]+n);
    }

    for(int i=0;i<n;i++)
    {
        int max = arr[0][i];
        for(int j=0;j<m;j++)
        {
            if(max<arr[j][i])
                max = arr[j][i];
        }
        for(int j=0;j<m;j++)
        {
            if(max==arr[j][i])
            {
                c[j]++;
                if(c[j]>maxc)
                {
                    maxc = c[j];
                }
                break;
            }
        }
    }

    for(int j=0;j<m;j++)
    {
        //printf("\n%d\n",c[j]);
        if(maxc==c[j])
        {
            printf("%d",j+1);
            break;
        }

    }
}
