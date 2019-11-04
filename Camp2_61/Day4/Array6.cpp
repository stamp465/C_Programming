#include<bits/stdc++.h>
using namespace std;
double countt[5],agee[5];
int main()
{
    int peo;
    double avgage=0;
    printf("Peo = ");   scanf("%d",&peo);
    for(int i=0;i<peo;i++)
    {
        double age;
        cin >> age;
        if(age<15)          {countt[0]++;   agee[0]+=age;}
        else if(age<=20)    {countt[1]++;   agee[1]+=age;}
        else if(age<=40)    {countt[2]++;   agee[2]+=age;}
        else if(age<=60)    {countt[3]++;   agee[3]+=age;}
        else                {countt[4]++;   agee[4]+=age;}
        avgage += age/peo;
    }
    for(int i=0;i<5;i++)
    {
        if(countt[i]!=0)    agee[i]/=countt[i];
    }
    printf("Kid     = %.0f       Avg = %.2f\n",countt[0],agee[0]);
    printf("Teen    = %.0f       Avg = %.2f\n",countt[1],agee[1]);
    printf("Adult   = %.0f       Avg = %.2f\n",countt[2],agee[2]);
    printf("Mid     = %.0f       Avg = %.2f\n",countt[3],agee[3]);
    printf("Old     = %.0f       Avg = %.2f\n",countt[4],agee[4]);
    printf("Avg All Age = %.2f",avgage);
}



