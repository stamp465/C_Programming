#include<bits/stdc++.h>
using namespace std;
struct Student{
    long int code;
    int numoffsub;
    int codesub[11];
    int grade[11];
    char fname[25];
    char lname[55];
}stu[101];

struct Subject{
    long int code;
    char name[35];
    int grade;
}sub[1005];

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%ld %d",&stu[i].code,&stu[i].numoffsub);
        for(int j=0;j<stu[i].numoffsub;j++){
            scanf("%d %d",&stu[i].codesub[j],&stu[i].grade[j]);
        }
    }
    int noname;
    scanf("%d",&noname);
    for(int i=0;i<noname;i++){
        long int c;
        char fname[25],lname[55];
        scanf("%ld %s %s",&c,fname,lname);
        for(int i=0;i<N;i++){
            if(stu[i].code==c){
                strcpy(stu[i].fname,fname);
                strcpy(stu[i].lname,lname);
            }
        }
    }
    int subj;
    scanf("%d",&subj);
    for(int i=0;i<subj;i++){
        scanf("%ld %s %d",&sub[i].code,sub[i].name,&sub[i].grade);
    }

    for(int i=0;i<N;i++){
        printf("%ld %s %s\n",stu[i].code,stu[i].fname,stu[i].lname);
        int sum = 0;
        for(int j=0;j<stu[i].numoffsub;j++){
            printf("%d ",stu[i].codesub[j]);
            int k;
            for(k=0;k<subj;k++){
                if(sub[k].code==stu[i].codesub[j]){
                    printf("%s ",sub[k].name);
                    break;
                }
            }
            char G;
            if(stu[i].grade[j]==-1)      G = 'W';
            else if(stu[i].grade[j]==0)  G = 'E';
            else if(stu[i].grade[j]==1)  G = 'D';
            else if(stu[i].grade[j]==2)  G = 'C';
            else if(stu[i].grade[j]==3)  G = 'B';
            else if(stu[i].grade[j]==4)  G = 'A';
            printf("%c\n",G);
            //printf("%d %d %d\n",stu[i].grade[j],sub[k].grade,stu[i].grade[j]*sub[k].grade);
            if(stu[i].grade[j]!=-1)    sum += stu[i].grade[j]*sub[k].grade;
        }
        printf("%d\n",sum);
    }

}
