#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int arrA[10000],arrB[10000];
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);

    for(int i=0;i<A;i++)
        scanf("%d",&arrA[i]);
    sort(arrA,arrA+A);
    for(int i=0;i<B;i++){
        scanf("%d",&arrB[i]);
    }
    sort(arrB,arrB+B);

    int min = arrA[0]+arrB[0]+100;

    for(int i=0;i<A;i++)
    {
        for(int j=i+1;j<A;j++)
        {
            if(min>arrA[i]+arrA[j])
            {
                min = arrA[i]+arrA[j];
            }
        }
        for(int j=0;j<B;j++)
        {
            if(min>arrA[i]+arrB[j]+100)
            {
                min = arrA[i]+arrB[j]+100;
            }
        }
    }

        for(int i=0;i<B;i++)
    {
        for(int j=i+1;j<B;j++)
        {
            if(min>arrB[i]+arrB[j])
            {
                min = arrB[i]+arrB[j];
            }
        }
        for(int j=0;j<A;j++)
        {
            if(min>arrA[j]+arrB[i]+100)
            {
                min = arrA[j]+arrB[i]+100;
            }
        }
    }
    printf("%d",min);
}
