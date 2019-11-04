#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int binarysearch(int start,int endd,int num)
{
    int mid = (start+endd)/2;
    if(vec[mid]==num){
        printf("%d\n",mid+1);
    }
    else if(vec[mid]>num)   binarysearch(start,mid,num);
    else if(vec[mid]<num)   binarysearch(mid,endd,num);
}


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int ch,num;
        scanf("%d %d",&ch,&num);
        if(ch==1){
            vec.push_back(num);
        }
        else{
            sort(vec.begin(),vec.end());
            binarysearch(0,vec.size(),num);
        }
    }
}
