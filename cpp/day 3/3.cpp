#include<stdio.h>
int main()
{
    int n,i=0;
    double yum,dog,kun,x;
    scanf("%d",&n);
    scanf("%lf %lf %lf",&yum,&dog,&kun);
    while(1)
       {
           i+=1;
           x=yum*dog/(100*12);
           yum = x+yum-kun;
           if(i==n){printf("%.2lf %.2lf",kun-x,x);}
           if(yum<=0){printf("\n");printf("%d",i);break;}
       }
}
