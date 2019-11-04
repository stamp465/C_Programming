#include<stdio.h>
#include<string.h>
char na[25];
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%s",&na);
        int _=0,X=0,T=0;
        for(int i=0;i<=strlen(na);i++)
        {
            if(na[i]=='-')     _++;
            if(na[i]=='X')     X++;
            if(na[i]=='T')     T++;
        }
        if(X!=0)            printf("Case #%d: No - Runtime error\n",i+1);
        else if(T!=0)       printf("Case #%d: No - Time limit exceeded\n",i+1);
        else if(_!=0)       printf("Case #%d: No - Wrong answer\n",i+1);
        else                            printf("Case #%d: Yes\n",i+1);
    }
}
