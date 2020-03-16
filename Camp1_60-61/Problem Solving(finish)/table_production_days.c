#include<stdio.h>
int main()
{
    int A=0,B=0,M=0,N=0,m=0,n=0;
    scanf("%d %d %d %d",&A,&B,&M,&N);
    A = A*6;
    B = B*10;
    if(A!=0) m = M/A;
    if(A!=0) if((M%A)>0)  m++;
    if(B!=0) n = N/B;
    if(B!=0) if((N%B)>0)  n++;
    if((A==0&&M>0)||(B==0&&N>0))    printf("Unable to finish order");
    else{
        if(m>n) printf("%d",m);
        else    printf("%d",n);
    }
}
