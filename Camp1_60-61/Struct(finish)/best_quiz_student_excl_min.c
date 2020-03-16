#include<stdio.h>
int main()
{
    int N,T,i,j,max=-1;
    scanf("%d %d",&N,&T);

    struct{
        char ID[11];
        int score[T];
        int sum;
    }student[N];

    for(i=0;i<N;i++)
    {
        scanf("%s",&student[i].ID);
        int sum=0;
        for(j=0;j<T;j++)
        {
            scanf("%d",&student[i].score[j]);
        }
        int min=10000;
        for(j=0;j<T;j++)
        {
            if(min>student[i].score[j]) min = student[i].score[j];
        }
        for(j=0;j<T;j++)
        {
            sum += student[i].score[j];
        }
        sum -= min;
        student[i].sum = sum;
        if(sum>max) max = sum;
    }
    printf("%d\n",max);
    for(i=0;i<N;i++)
    {
        if(student[i].sum==max)
            printf("%s\n",student[i].ID);
    }
}
