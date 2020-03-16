#include<stdio.h>
int sum1=0,sum2=0,sum3=0;
int main()
{
    int N,B[3];
    int check1,check2,check3,p;
    int box1[3] = {15,10,8} , box2[3] = {25,15,12} , box3[3] = {50,40,20};
    scanf("%d",&N);
    int p1 = 1200,p2 = 4500,p3 = 40000;
    int b1=0,b2=0,b3=0;
    for(int i=0;i<N;i++)
    {
        p = 1;
        int sheap[3];
        scanf("%d %d %d",&sheap[0],&sheap[1],&sheap[2]);
        int v = sheap[0]*sheap[1]*sheap[2];
        check1 = 1;
        for(int j=0;j<3;j++)    if(sheap[j]>box1[j])    check1 = 0;
        if(check1 == 1){
            printf("1\n");      b1++;   //printf("%d...",b1);
            sum1 += p1 - v;
            continue;
        }
        check2 = 1;
        for(int j=0;j<3;j++)    if(sheap[j]>box2[j])    check2 = 0;
        if(check2 == 1){
            printf("2\n");      b2++;   //printf("%d...",b2);
            sum2 += p2 - v;
            continue;
        }
        check3 = 1;
        for(int j=0;j<3;j++)    if(sheap[j]>box3[j])    check3 = 0;
        if(check3 == 1){
            printf("3\n");      b3++;   //printf("%d...",b3);
            sum3 += p3 - v;
            continue;
        }
        else
        {
            printf("Oversize product\n");               continue;
        }

    }
    printf("%d %d\n%d %d\n%d %d\n",b1,sum1,b2,sum2,b3,sum3);

}

