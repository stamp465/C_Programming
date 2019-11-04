#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b+c>=80){cout << "A";}
    else if(a+b+c>=75){cout << "B+";}
    else if(a+b+c>=70){cout << "B";}
    else if(a+b+c>=65){cout << "C+";}
    else if(a+b+c>=60){cout << "C";}
    else if(a+b+c>=55){cout << "D+";}
    else if(a+b+c>=50){cout << "D";}
    else{cout << "F";}
}
