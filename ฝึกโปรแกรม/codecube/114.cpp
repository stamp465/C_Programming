#include<stdio.h>
int arr[100];
int main()
{
    int M,N,T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&M,&N);
        int count=0;

        for(int k=0;k<=M;k++)
        {
            int m=0;
            while(1)
            {
                if(m>N) break;
                if(m+k==N)
                {
                    count++;
                    break;
                }
                m += 20;
            }
        }

        printf("Case #%d: %d\n",i+1,count);
    }

}
