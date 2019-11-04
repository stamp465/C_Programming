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
    int i=0,q=0;
    string n;
    do{
        int ne=0,p=3;
        n = longg.substr(q,4);
        //cout << n << endl;
        int c1 = n.compare("0020"); //cout << c1 << "...." ;
        int c2 = n.compare("007F"); //cout << c2 << "...." ;
        int c3 = n.compare("0E00"); //cout << c3 << "...." ;
        int c4 = n.compare("0E7F"); //cout << c4 << "...." ;
        int c5 = n.compare("3040"); //cout << c5 << "...." ;
        int c6 = n.compare("309F"); //cout << c6 << "...." ;
        int c7 = n.compare("0600"); //cout << c7 << "...." ;
        int c8 = n.compare("06FF"); //cout << c8 << "...." ;
        int c9 = n.compare("0E80"); //cout << c9 << "...." ;
        int c10 = n.compare("0EFF"); //cout << c10 << "...." ;
        int c11 = n.compare("30A0"); //cout << c11 << "...." ;
        int c12 = n.compare("30FF"); //cout << c12 << "...." ;
        //cout << endl;

        if(c1>=0&&c2<=0) cout << "BASIC LATIN" <<endl;
        else if(c3>=0&&c4<=0) cout << "THAI" <<endl;
        else if(c5>=0&&c6<=0) cout << "HIRAGANA" <<endl;
        else if(c7>=0&&c8<=0) cout << "ARABIC" <<endl;
        else if(c9>=0&&c10<=0) cout << "LAO" <<endl;
        else if(c11>=0&&c12<=0) cout << "KATAKANA" <<endl;
        else cout << "UNKNOWN" <<endl;

        /*for(i=0;i<4;i++)
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
        }*/





        q+=5;
        //cout << n << " " << q << ".";
        n.clear();
        //cout << n << endl;

    }while(q<longg.length());

}
