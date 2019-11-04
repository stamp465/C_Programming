#include<stdio.h>
#include<math.h>
#define max 100000
int loop(long int,long int);
int time(long int,long int);
int lmb(long int,long int);
int main()
{
    long int a,b[max],i,*pb,*pb1,b1,tim;
    scanf("%ld",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%ld",&b[i]);
    }
    for(i=1;i<=a;i++)
    {
        b[i] = fabs(b[i]);
    }
    for(i=1;i<a;i++)
    {
        b1 = b[i+1];
        pb = &b[i];
        pb1 = &b[i+1];
        //printf("%d %d\n",*pb,*pb1);
        *pb1 = loop(*pb,*pb1);
        //printf("%d %d\n",*pb,*pb1);
        tim = time(*pb,b1);
        *pb1 = lmb(tim,*pb1);
    }
    printf("%ld",*pb1);
}
int loop(long int x,long int y) //gcd
{
    long int a,b,c;
    while(y!=0){
        c = y;
        y = x%y;
        x = c;
    }
    return(x);
}
int time(long int x,long int y) //time sum
{
    long int a;
    a = x*y;
    return(a);
}
int lmb(long int x,long int y) //lmd
{
    long int a;
    a = x/y;
    return(a);
}

