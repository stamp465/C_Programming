#include<iostream>
#include<cmath>
#include<string>
#include<stack>
#include <stdlib.h>
using namespace std;
int main()
{
    string longg;
    cin >> longg;
    int y = longg.length();
    //cout << y << endl;
    int i=0,q=0;
    string n;
    do{
        int ne=0,p=3;
        n = longg.substr(q,4);
        for(i=0;i<4;i++)
        {
        if(n[i]=='0')
        {
            ne = 0+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='1')
        {
            ne = 1*pow(16,p) + ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='2')
        {
            ne = 2*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='3')
        {
            ne = ne + 3*pow(16,p);
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='4')
        {
            ne = 4*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='5')
        {
            ne = 5*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='6')
        {
            ne = 6*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='7')
        {
            ne = 7*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='8')
        {
            ne = 8*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='9')
        {
            ne = 9*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='A')
        {
            ne = 10*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='B')
        {
            ne = 11*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='C')
        {
            ne = 12*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='D')
        {
            ne = 13*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='E')
        {
            ne = 14*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='F')
        {
            ne = 15*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        }
        //cout << ne << ".";
        if(ne>=32&&ne<=127)
        {
            cout << "BASIC LATIN" << endl;
        }
        else if(ne>=3584&&ne<=3711)
        {
            cout << "THAI" << endl;
        }
        else if(ne>=12352&&ne<=12447)
        {
            cout << "HIRAGANA" << endl;
        }
        else if(ne>=1536&&ne<=1791)
        {
            cout << "ARABIC" << endl;
        }
        else if(ne>=3712&&ne<=3839)
        {
            cout << "LAO" << endl;
        }
        else if(ne>=12448&&ne<=12543)
        {
            cout << "KATAKANA" << endl;
        }
        else
        {
            cout << "UNKNOWN" << endl;
        }





        q+=5;
        //cout << n << " " << q << ".";
        n.clear();
        //cout << n << endl;

    }while(q<longg.length());


    /*string n;
    int s,d,nlong;
    cin >> n ;
    nlong = n.length();
    int p=nlong-1;
    int ne=0,i=0;
    stack<string> a;
    //cout << pow(s,p)*3 << " ";
    for(i=0;i<nlong;i++)
    {
        if(n[i]=='0')
        {
            ne = 0+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='1')
        {
            ne = 1*pow(16,p) + ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='2')
        {
            ne = 2*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='3')
        {
            ne = ne + 3*pow(s,p);
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='4')
        {
            ne = 4*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='5')
        {
            ne = 5*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='6')
        {
            ne = 6*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='7')
        {
            ne = 7*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='8')
        {
            ne = 8*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='9')
        {
            ne = 9*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='a')
        {
            ne = 10*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='b')
        {
            ne = 11*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='c')
        {
            ne = 12*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='d')
        {
            ne = 13*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='e')
        {
            ne = 14*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
        if(n[i]=='f')
        {
            ne = 15*pow(16,p)+ ne;
            //cout << ne << " ";
            p--;
        }
    }
    cout << ne;*/

}
