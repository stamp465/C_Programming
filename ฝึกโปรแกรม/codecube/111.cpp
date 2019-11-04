#include<cstdio>
using namespace std;
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A+B+C<100||A+B+C>100)   printf("BUG");
    else if(A>B&&A>C)   printf("PAPER");
    else if(B>A&&B>C)   printf("SCISSORS");
    else if(C>A&&C>B)   printf("ROCK");
    else if(A==B||B==C||A==C)   printf("I DON'T KNOW");
}
