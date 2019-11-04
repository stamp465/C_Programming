#include<iostream>
int i,n,j,a[1000],x;
using namespace std;
int main()
{
   cin >> n ;
   for(i=0;i<n;i++)
   {
       cin >> a[i];
   }
   for(i=0;i<n-1;i++)
   {
       for(j=i;j<n;j++)
          if(a[i]>a[j])
           {
              x=a[i];
              a[i]=a[j];
              a[j]=x;
           }
   }
   /*for(i=0;i<n;i++)
    cout << a[i] << endl ;*/


   cout << a[0] << "\n" << a[n-1] ;
}


