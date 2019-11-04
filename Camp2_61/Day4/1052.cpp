#include<bits/stdc++.h>
using namespace std;

int main()
{
    int countt = 0,num=1000000;
    char save='L';
    int N;
    scanf("%d",&N);
    vector<pair<long int,long int> > vec;
    for(int i=0;i<N;i++)
    {
        long int a,b;
        scanf("%ld %ld",&a,&b);
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<N;i++)
    {
        int crashR=1,crashL=1,R=0,L=0;
        //////////////////////////////////
        int beginL = i;
        long long checkL = vec[beginL].first-vec[beginL].second;
        while(1)
        {
            L++;
            if(beginL-L>=0)
            {
                if(checkL<vec[beginL-L].first)
                {
                    if(vec[beginL-L].first-vec[beginL-L].second<checkL) checkL = vec[beginL-L].first-vec[beginL-L].second;
                    crashL++;
                }
                if(checkL>=vec[beginL-L].first)
                {

                    break;
                }
            }
            else break;
        }
        if(countt==crashL){
            if(num>i+1){
                save = 'L';
                num = i+1;
            }
        }
        if(countt<crashL){
            save = 'L';
            countt = crashL;
            num = i+1;
        }
        ////////////////////////////////////////
        int beginR = i;
        long long checkR = vec[beginR].first+vec[beginR].second;

        while(1)
        {
            R++;
            if(beginR+R<N)
            {
                if(checkR>vec[beginR+R].first)
                {
                    if(checkR<vec[beginR+R].first+vec[beginR+R].second) checkR = vec[beginR+R].first+vec[beginR+R].second;
                    crashR++;
                }
                if(checkR<=vec[beginR+R].first)
                {
                    break;
                }
            }
            else break;
        }
        if(countt==crashR){
            if(num>i+1){
                save = 'R';
                num = i+1;
            }
        }
        if(countt<crashR){
            save = 'R';
            countt = crashR;
            num = i+1;
        }
    }
    printf("%d %c",num,save);
}
