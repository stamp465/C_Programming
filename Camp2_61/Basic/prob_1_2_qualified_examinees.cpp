#include<iostream>
#include<string>
using namespace std;
int main()
{
    int N,count=0,sum=0;
    cin >> N;
    int score[N];
    string code[N];
    do{
        cin >> code[count] >> score[count];
        sum += score[count];
        count++;
    }while(count!=N);
 //   cout << sum << endl;
    int num=0;
    sum /= N;
//    cout << sum << endl;
    count = 0;
    while(count!=N){
        if(score[count]>sum)
            num++;
            count++;
    }
    cout << num << endl;
    count = 0;
    while(count!=N){
        if(score[count]>sum)
            cout << code[count] << endl;
            count++;
    }
}
