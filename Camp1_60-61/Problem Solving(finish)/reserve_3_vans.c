#include<stdio.h>
int main()
{
    int A=0,B=0,C=0;
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        int a;
        scanf("%d",&a);
        if(A<=B&&A<=C)
        {
            printf("A\n");
            A += a;
        }
        else if(B<=A&&B<=C)
        {
            printf("B\n");
            B += a;
        }
        else if(C<=A&&C<=B)
        {
            printf("C\n");
            C += a;
        }
    }
}
