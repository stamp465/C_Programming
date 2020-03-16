#include<stdio.h>
int main()
{
    int N,B[3];
    int check1,check2,check3,p;
    int box1[3] = {15,10,8} , box2[3] = {25,15,12} , box3[3] = {50,40,20};
    scanf("%d",&N);
    scanf("%d %d %d",&B[0],&B[1],&B[2]);
    for(int i=0;i<N;i++)
    {
        p = 1;
        int sheap[3];
        scanf("%d %d %d",&sheap[0],&sheap[1],&sheap[2]);
        check1 = 1;
        for(int j=0;j<3;j++)    if(sheap[j]>box1[j])    check1 = 0;
        if(check1 == 1&&B[0]>0){
            printf("1\n");      B[0]--;     continue;
        }
        check2 = 1;
        for(int j=0;j<3;j++)    if(sheap[j]>box2[j])    check2 = 0;
        if(check2 == 1&&B[1]>0){
            printf("2\n");      B[1]--;     continue;
        }
        check3 = 1;
        for(int j=0;j<3;j++)    if(sheap[j]>box3[j])    check3 = 0;
        if(check3 == 1&&B[2]>0){
            printf("3\n");      B[2]--;     continue;
        }
        if(check1==0&&check2==0&&check3==0&&p==1)
        {
            printf("Oversize product\n");               continue;
        }
        else
        {
            printf("Box not available\n");              continue;
        }
    }

}
