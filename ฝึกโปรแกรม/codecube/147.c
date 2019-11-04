#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    struct{
        int up;
        int down;
    }card[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&card[i].up,&card[i].down);
    }
    for(int i=0;i<m;i++)
    {
        int k;
        scanf("%d",&k);
        for(int j=0;j<n;j++){
            if(card[j].up<=k)
            {
                int m = card[j].up;
                card[j].up = card[j].down;
                card[j].down = m;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",card[i].up);
    }
}
