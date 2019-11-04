#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){printf(" Invalid N");}
    int i,j,k;
    for(i=1;i<n/2+1;i++)
    {
        for(j=1;j<=i-1;j++){printf(" ");}
        printf("*");
        for(j=1;j<=n-2*i;j++){printf(" ");}
        printf("*");
        printf("\n");
    }
    for(i=1;i<=n/2;i++)printf(" ");printf("*");printf("\n");

    for(i=n/2;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)printf(" ");
        printf("*");
        for(j=1;j<=n-2*i;j++)printf(" ");
        printf("*");
        printf("\n");
    }
}
