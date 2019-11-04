#include<cstdio>
char a[100005];
int main()
{
    int check = 0;
    int N;
    char save;
    scanf("%d",&N);
    scanf("%s",&a);
    for(int i=0;i<=N;i++)
    {
        if(i==0)    save = a[i];
        if(i>0&&a[i]==save) {   check=1;    break;  }
        save = a[i];
    }
    if(check==0)    printf("Accepted");
    else            printf("Wrong Answer");
}
