#include<stdio.h>
int N;
void Front_Back_1()
{
    for(int i=0;i<N;i++)
    {
        printf("*");
    }
    printf("\n");
}
void Front_Back_2()
{
    printf("*");
    for(int i=1;i<N-1;i++)
    {
        printf(" ");
    }
    printf("*");
    printf("\n");
}
int main()
{
    scanf("%d",&N);
    Front_Back_1();
    Front_Back_2();
    for(int j=0;j<N-4;j++)
    {
        for(int i=0;i<N;i++)
        {
            if(i==1||i==N-2)
            {
                printf(" ");
            }
            else    printf("*");
        }
        printf("\n");
    }
    Front_Back_2();
    Front_Back_1();


}


