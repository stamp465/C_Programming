#include<stdio.h>
int N,M,TH,t,T=0;
int main()
{

    scanf("%d %d %d",&N,&M,&TH);
    int z=M;
    printf("%d",M);
    while(1)
        {
            scanf("%d",&t);
            printf("%d",t-T);
            printf("\n");
           if(t<T)return 0;
           else if(t-T<=N)
                {
                    if(z*2>TH){z=z+M;}
                    else if(z*2<=TH){z=z*2;}

                    printf("%d",z);
                }
           else if(t-T>N){z=M;printf("%d",z);TH=TH/2;}
           printf("\n");


           T=t;
        }

}

