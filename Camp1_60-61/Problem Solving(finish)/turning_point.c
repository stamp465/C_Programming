#include<stdio.h>
int main()
{
    int N,save1,save2,i=0,countup=0,countdown=0;
    while(1)
    {
        i++;
        scanf("%d",&N);
        if(N==0)    break;
        if(i>2)
        {
            if(save1>save2&&N<save1)    countdown++;
            if(save1<save2&&N>save1)    countup++;
            save2 = save1;
            save1 =N;
        }
        if(i==1)    save2 = N;
        if(i==2)    save1 = N;

    }
    printf("%d\n%d",countdown,countup);
}
