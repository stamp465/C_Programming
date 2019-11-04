#include<bits/stdc++.h>
using namespace std;



int main(){
    int i;



    printf("Vector...........\n");
    vector<int> v;  //ใส่ข้อมูลเข้าไปเรื่อยๆ        //o(n)
    for(i=0;i<10;i++)   v.push_back(i);
    for(i=0;i<10;i++)   printf("%d ",v[i]);



    printf("\n\nSet...........\n");
    set<int> s;     //o(log n)   //ห้ามซ้ำ
    set<int>::iterator vt;
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(10);
    printf("%d...",s.size());
    for(vt=s.begin();vt!=s.end();vt++)  printf(" %d ",*vt);
    if(s.find(15) != s.end())
            s.erase(15);
    if(s.count(15)==true)  printf("find");



    printf("\n\nMap...........\n");
    map<string,int>m;     //แพคคู่ไว้           //o(log n)
    map<string,int>::iterator st;
    m["ABC"] = 5;
    printf("%d\n",st=m.end());
    if(m.count("Hello"))    printf("FIND HELLO\n");
    for(st=m.begin();st!=m.end();st++){
        cout << st->first << " " << st->second << endl;
    }



    printf("\n\nPair...........\n");
    pair<int,int> p;
    map<string,int>::iterator pt;
    p.first = 23;
    p.second = 25;
    cout << p.first << endl;



    printf("\n\nPriority queue...........\n");
    priority_queue<int> q;      //เร็วกว่าset
    q.push(120);
    q.push(150);
    q.push(200);
    q.push(140);
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;



    printf("\n\nStack...........\n");
    int sta1[100],top=0;
    stack<int> sta2;
    sta1[top] = 10; top++;
    sta2.push(10);
    cout << sta1[top-1] << endl;
    cout << sta2.top()  << endl;
    sta1[top--];
    sta2.pop();



    printf("\n\nQueue...........\n");
    int q1[100],fr=0,bk=0;
    queue<int> q2;
    q1[bk++] = 10;
    q2.push(10);
    cout << q1[fr]   << endl;
    cout << q2.front()  << endl;
    q1[fr++];
    q2.pop();




}
