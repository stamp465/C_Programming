#include<stdio.h>
int main()
{
    float arr[8],A,B,C,D,avg=0;
    scanf("%f %f %f %f",&A,&B,&C,&D);
    for(int i=0;i<8;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<8;i++)
    {
        if(arr[i]>=A){
            printf("4\n");
            avg += 4;
        }
        else if(arr[i]>=B){
            printf("3\n");
            avg += 3;
        }
        else if(arr[i]>=C){
            printf("2\n");
            avg += 2;
        }
        else if(arr[i]>=D){
            printf("1\n");
            avg += 1;
        }
        else    printf("0\n");

    }
    printf("%f",avg/8);
}
