#include<stdio.h>
void stamp(int x,int y)
{
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            printf("(%d, %d) ",i,j);
        }printf("\n");
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    stamp(n,m);
}
