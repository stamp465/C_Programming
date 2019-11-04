#include<bits/stdc++.h>
using namespace std;

double arr[30][30][1000];
//vector<double> arr[50][50];
int countt[30][30];
double med[30][30];
vector<int> vec[30],show,go;
vector<int>::iterator it;
bool bfs(int start)
{
    go.push_back(start);
    show.push_back(start);
    while(!go.empty()){
        int u=go.front();
        go.erase(go.begin());
        if(!vec[u].empty()){
            for(int i=0;i<vec[u].size();i++){
                it = find (show.begin(), show.end(), vec[u][i]);
                if (it != show.end()){}
                else{
                    //cout << vec[u][i] << " ";
                    go.push_back(vec[u][i]);
                    show.push_back(vec[u][i]);
                }
                if(vec[u][i]==27)   return true;
            }
        }
        else{
            return false;
        }
    }
}
int setnum(int start,int endd,double num)
{
    vec[start].push_back(endd);
    vec[endd].push_back(start);
    arr[start][endd][countt[start][endd]] = num;
    arr[endd][start][countt[endd][start]] = num;
    sort(arr[start][endd],arr[start][endd]+countt[start][endd]+1);
    sort(arr[endd][start],arr[endd][start]+countt[endd][start]+1);
    if(countt[start][endd]%2==0){
        //cout << "1 =  " <<num << endl;
        med[start][endd] = arr[start][endd][countt[start][endd]/2];
        med[endd][start] = med[start][endd];
    }
    else{
        //cout << "2 = " << num << endl;
        med[start][endd] = (arr[start][endd][countt[start][endd]/2] + arr[start][endd][countt[start][endd]/2+1])/2;
        med[endd][start] = med[start][endd];
    }
    countt[start][endd]++;
    countt[endd][start]++;
}

int main()
{
    int N;
    cin >> N;
    //scanf("%d",&N);
    for(int qq=0;qq<N;qq++)
    {
        char startt,enddd;
        double num;
        cin >> startt >> enddd >> num;
        //scanf("%s %s",startt,enddd);
        //scanf("%f",&num);
        int start = (int)startt,endd=(int)enddd;
        if(start==88||endd==89||start==89||endd==88){
            if(start==88&&endd==89||start==89&&endd==88){
                start = 0;
                endd = 27;
                setnum(start,endd,num);
            }
            else if(start==88){
                endd-=96;
                start = 0;
                setnum(start,endd,num);
            }
            else if(endd==89){
                start-=96;
                endd=27;
                setnum(start,endd,num);
            }
            else if(start==89){
                endd-=96;
                start = 27;
                setnum(start,endd,num);
            }
            else if(endd==88){
                start-=96;
                endd = 0;
                setnum(start,endd,num);
            }
        }
        else{
            start -= 96;
            endd -= 96;
            setnum(start,endd,num);
        }
        //cout << med[start][endd] << "...\n";
    }
    if(bfs(0)){
        double sum=0;
        //cout << show.front() << show.back() << endl;
        for(int i=0;i<show.size()-1;i++)
        {
            int a = show[i], b= show[i+1];
            if(a==0)  a = 88;
            else if(a==27)  a = 89;
            else a+=96;
            if(b==0)  b = 88;
            else if(b==27)  b = 89;
            else b+=96;
            printf("%c %c %.1f\n",(char)a,(char)b,med[show[i]][show[i+1]]);
            sum += med[show[i]][show[i+1]];
        }
        printf("%.1f",sum);
    }
    else printf("broken");

}
