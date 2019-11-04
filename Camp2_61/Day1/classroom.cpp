#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
};

class Student:public Person{
public:
    int stduentID;
    float sub1=4.00;
    float sub2=4.00;
    float sub3=4.00;
    float sub4=4.00;
    void setstudent(string name,int id){
        this->name = name;
        this->stduentID = id;
    }
    float gpa(){
        return (sub1+sub2+sub3+sub4)/4;
    }
    void showstudent(){
        cout << "Name = " << name << " StudentID = " << stduentID << endl;
    }
    void showgpa(){
        cout << "GPA = " << gpa() << endl;
    }
};


int main()
{
    string name;
    Student A;
    cin >> name;
    A.setstudent(name,1);
    A.showstudent();
    A.showgpa();
}
