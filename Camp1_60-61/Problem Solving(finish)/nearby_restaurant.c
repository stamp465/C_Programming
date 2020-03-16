#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,count=0;
    scanf("%d %d",&n,&m);
    int walk,res,o,p;
    scanf("%d %d",&walk,&res);
    for(int i=0;i<res;i++)
    {
        scanf("%d %d",&o,&p);
        if(abs(n-o)+abs(m-p)<=walk) count++;
    }
    printf("%d",count);
}
