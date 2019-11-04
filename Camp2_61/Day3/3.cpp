#include<bits/stdc++.h>
using namespace std;
int main()
{
    double month,moneygu,flower,jai;
    cin >> month >> moneygu >> flower >> jai;
    double monthch=1,monthall=1;
    while(moneygu>0)
    {

        double flowerpay;
        if(moneygu<=0)  break;
        else{
            //cout << monthch << endl;
            flowerpay = moneygu*flower/100/12;
            moneygu += flowerpay;
            moneygu -= jai;
            if(moneygu<=0)  break;
            if(moneygu<jai&&monthall==month){
                printf("%.2f %.2f\n",jai-flowerpay+moneygu,flowerpay) ;
            }
            else if(monthall==month) printf("%.2f %.2f\n",jai-flowerpay,flowerpay) ;
        }
        //cout << monthall ; printf(" %.2f\n",moneygu) ;
        //monthch++;
        monthall++;
        //if(monthch>12)  monthch=1;
    }
    if(month>monthall-1)    cout << "0.00 0.00" << endl;
    cout << monthall-1 ;
}
