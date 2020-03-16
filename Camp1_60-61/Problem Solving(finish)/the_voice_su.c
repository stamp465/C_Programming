#include<stdio.h>
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    int sex1=K,sex2=K;
    for(int i=0;i<N;i++)
    {
        int sex,score1,score2;
        scanf("%d %d %d",&sex,&score1,&score2);
        if(score1>8||score2>8)
        {
            if(score1>8&&score2>8)
            {
                if(sex==1&&sex1>0)
                {
                    printf("%d 1\n",i+1);
                    sex1--;
                }
                else if(sex==2&&sex2>0)
                {
                    printf("%d 2\n",i+1);
                    sex2--;
                }
                else if(sex==1&&sex1==0&&sex2>0)
                {
                    printf("%d 2\n",i+1);
                    sex2--;
                }
                else if(sex==2&&sex2==0&&sex1>0)
                {
                    printf("%d 1\n",i+1);
                    sex1--;
                }
            }
            else if(score1>8)
            {
                if(sex1>0)
                {
                    printf("%d 1\n",i+1);
                    sex1--;
                }
            }
            else if(score2>8)
            {
                if(sex2>0)
                {
                    printf("%d 2\n",i+1);
                    sex2--;
                }
            }
        }
    }
}
