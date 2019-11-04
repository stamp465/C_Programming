#include<cstdio>
#include <stdint.h>
#include<algorithm>
using namespace std;
long long int sum=0,N,num,i,o,j=0,k=0,l=0,arrplus[1000000],arrmius[1000000],arrtime[1000000],mius=0,count_x0=0;
char a;
int main()
{
    scanf("%lld",&N);
    for(i=0;i<N;i++)
    {
        scanf("%s",&a);
        scanf("%lld",&num);
        if(a=='+')
        {
            arrplus[l] = num;
            l++;
        }
        if(a=='-')
        {
            arrmius[k] = num;
            k++;
        }
        if(a=='x')
        {
            arrtime[j] = num;
            if(num==0)  count_x0++;
            j++;
        }
    }
    sort(arrplus,arrplus+l);
    sort(arrmius,arrmius+k);
    sort(arrtime,arrtime+j);
    long long int ch=0;
    for(i=0;i<j;i++)
    {
        if(arrtime[i]==0)
        {
            //printf("..0..");
            ch = 1;
        }
    }
    long long int sum=0;
    for(i=0;i<l;i++)
    {
        sum += arrplus[i];
    }
    //printf("%d..",sum);
    for(i=0;i<j;i++)
    {
        if(arrtime[i]!=0)
            sum *= arrtime[i];
    }
    //printf("%d..",sum);
    if(ch==0)
    for(i=0;i<k;i++)
    {
        sum -= arrmius[i];
    }

    printf("%lld",sum);

}
