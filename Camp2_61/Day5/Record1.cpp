#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main () {
    int N,bantad=0;
    ifstream myfile;
    string line;
    myfile.open ("example.txt");
    while ( getline (myfile,line) )
    {
        bantad++;
        if(bantad == 1 )
        {
            N = atoi(line.c_str());
            break;
        }
    }
    //cout << N << endl;
    struct SS{
            string name;
            int code;
            int day;
            int month;
            int year;
            float grade;
    }student[N];
    bantad = 0;
    int count =0;
    while ( getline (myfile,line) )
    {
        int l1=0,l2=0,l3=0,l4=0,l5=0,l6=0;
        bantad++;
        if(bantad > 0 )
        {
            int size;
            size = line.length();
            //cout << size << endl;
            for(int i=0;i<size;i++)
            {
                if(line[i]=='$'&&l1==0)
                {
                    student[count].name = line.substr(0,i);
                    //cout << student[count].name << i << endl;
                    l1=i;
                    i+=2;
                }
                else if(line[i]=='$'&&l2==0)
                {
                    //cout << i << "." << i-(l1+3) << " ";
                    string aa;
                    aa = line.substr(l1+3,i-(l1+3));
                    //cout << aa << endl;
                    l2=i;
                    i+=2;
                    student[count].code = atoi(aa.c_str());
                    //cout << student[count].code << endl;
                }
                else if(line[i]=='/'&&l3==0)
                {
                    string aa;
                    aa = line.substr(l2+3,2);
                    //cout << aa << endl;
                    l3=i;
                    student[count].day = atoi(aa.c_str());
                    //cout << student[count].day << endl;
                }
                else if(line[i]=='/'&&l4==0)
                {
                    string aa;
                    aa = line.substr(l3+1,2);
                    //cout << aa << endl;
                    l4=i;
                    student[count].month = atoi(aa.c_str());
                    //cout << student[count].month << endl;
                }
                else if(line[i]=='$'&&l5==0)
                {
                    string aa;
                    aa = line.substr(l4+1,4);
                    //cout << aa << endl;
                    l5=i;
                    i +=2;
                    student[count].year = atoi(aa.c_str());
                    //cout << student[count].year << endl;
                }
                else if(line[i]=='$'&&l6==0)
                {
                    string aa;
                    aa = line.substr(l5+3,i-(l5+3));
                    //cout << aa << endl;
                    l6=i;
                    i +=2;
                    student[count].grade = atof(aa.c_str());
                    //cout << student[count].grade << endl;
                }

            }
            count++;
        }
        //cout << line << '\n';
    }
    //cout << count << endl;
    int PPP;
    cout << "Menu : " ; cin >> PPP;
if(PPP==1)
{
    int maxyear=-10,minyear=500000;
    for(int i=0;i<N;i++)
    {
        if(maxyear<student[i].year)
            maxyear = student[i].year;
        if(minyear>student[i].year)
            minyear = student[i].year;
    }
    int arr[maxyear+1];

    for(int i=minyear;i<maxyear+1;i++)
    {
        arr[i] = 0;
        for(int j=0;j<N;j++)
        {
            if(student[j].year==i)
            {
                arr[i]++ ;
            }
        }
    }
    cout << "-----1-----" << endl;
    for(int i=minyear;i<maxyear+1;i++)
    {
        if(arr[i]!=0)
        {
            cout << "In Year " << i << " student has born " << arr[i] << endl;
        }
    }
}
if(PPP==2)
{
    int mingpa,maxgpa;
    int mini=16666,maxi=-1000;
    int i=0;

    for(i=0;i<N;i++)
    {

        if(mini>student[i].grade)
        {
            //cout << "OO ";
            mini = student[i].grade;
            mingpa = i;
        }
        else if(maxi<student[i].grade)
        {
            //cout << "PP ";
            maxi = student[i].grade;
            maxgpa = i;
        }
    }
    cout << "-----2-----" << endl;
    cout << "Min GPA. : " << student[mingpa].name << " Code : " << student[mingpa].code << endl;
    cout << "Max GPA. : " << student[maxgpa].name << " Code : " << student[maxgpa].code << endl;
}
if(PPP==3)
{
    cout << "-----3-----" << endl;
    int arr3[N];
    for(int i=0;i<N;i++)
    {
        arr3[i] = student[i].code;
        //cout << arr3[i] <<endl;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=i;j<N;j++)
        {
            if(arr3[i]>arr3[j])
            {
                int k=arr3[j];
                arr3[j] = arr3[i];
                arr3[i] = k;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(student[j].code==arr3[i])
            {
                cout << i+1 << ". code : " << student[j].code << "\tName : " << student[j].name << "\tGPA : " << student[j].grade << endl;
            }
        }
    }
}
if(PPP==4)
{
    cout << "-----4-----" << endl;
    int arr4[N];
    for(int i=0;i<N;i++)
    {
        arr4[i] = student[i].day + student[i].month*30 + student[i].year*365;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=i;j<N;j++)
        {
            if(arr4[i]<arr4[j])
            {
                int k=arr4[j];
                arr4[j] = arr4[i];
                arr4[i] = k;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(student[i].day + student[i].month*30 + student[i].year*365==arr4[i])
            {
                cout << i+1 << ". born : " << student[j].day << " /\t" << student[i].month << " /\t" << student[i].year << "\tName : " << student[j].name << "\tGPA : " << student[j].grade << endl;
            }
        }
    }
}
if(PPP==5)
{
    cout << "-----5-----" << endl;
    float avg=0.0;
    for(int i=0;i<N;i++)
    {
        avg += student[i].grade;
    }
    avg /= N;
    cout << "Low GPA student : " << endl;
    for(int j=0;j<N;j++)
    {
        if(student[j].grade<avg)
        {
            cout << student[j].name << "\tGPA : " << student[j].grade << endl;
        }
    }
}
if(PPP==6)
{
	int count=0;
    cout << "-----6-----" << endl;
    char A;
    cout << "First character : ";
    cin >> A;
    float max=0,min=0;
    for(int j=0;j<N;j++)
    {
        //cout << "..." ;
        if(student[j].name[0]==A)
        {
            cout << student[j].name << " GPA = " << student[j].grade << endl;
            if(max<student[j].grade)
            max = student[j].grade;
            if(min>student[j].grade)
            min = student[j].grade;
            count =1;
        }
    }
    if(count == 0)
    cout << "Doesn't have" << endl;
    cout << "Max GPA of : " << A << " = " << max << endl;
    cout << "Min GPA of : " << A << " = " << min << endl;
}
    myfile.close();
}
