#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int d=0,s=0;
    int o,p;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&o,&p);
        d += o;
        s += p;
    }
    if(d-s>=n/2&&d-s<n)
    {
        int a = d;
        int b = s;
        d=0;
        s=0;
        for(int i=0;i<m;i++)
        {
            scanf("%d %d",&o,&p);
            d += o;
            s += p;
        }
        if(d-s==0)
        {
            printf("Profit %d\nWait and see\n",a-b);
            printf("Breakeven\nNot expand");
        }
        else if(d-s<0)
        {
            printf("Profit %d\nWait and see\n",a-b);
            printf("Loss %d\nNot expand",s-d);
        }
        else if(d-s>=n)
        {
            printf("Profit %d\nWait and see\n",a-b);
            printf("Profit %d\nExpand",d-s);
        }
        else if(d-s<n)
        {
            printf("Profit %d\nWait and see\n",a-b);
            printf("Profit %d\nNot Expand",d-s);
        }
    }
    else if(d-s==0)
    {
        printf("Breakeven\nNot expand");
    }
    else if(d-s<0)
    {
        printf("Loss %d\nNot expand",s-d);
    }
    else if(d-s>=n)
    {
        printf("Profit %d\nExpand",d-s);
    }
    else if(d-s<n/2)
    {
        printf("Profit %d\nNot Expand",d-s);
    }
}
