#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int count=0,save,countmax=0;
    for(int i=0;i<N;i++)
    {
        int a;
        scanf("%d",&a);
        if(i!=0)
        {
            if(save<a)
            {
                count++;
            }
            if(count>countmax)  countmax = count;
            if(save>=a)  count = 0;
        }
        save = a;
    }
    if(countmax == 0)  printf("No value increase");
    else            printf("%d",countmax);
}
