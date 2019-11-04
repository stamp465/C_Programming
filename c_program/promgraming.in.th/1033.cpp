

#include<bits/stdc++.h>
using namespace std;
int arr[200][200];
int countt[4];

int main()
{
    int N,walk,maxx=0,countofmax=0;
    cin >> N >> walk;
    int savei[4]={0,N-1,N-1,0};
    int savej[4]={N-1,N-1,0,0};
    for(int i=0;i<4;i++)
    {
        arr[savei[i]][savej[i]]=i+1;
    }
    string go[4];
	for(int j=0;j<4;j++)
    	for(int i=0;i<walk;i++)
    	{
        	string s;
        	cin >> s;
        	go[j].push_back(s[0]);
    	}
	for(int i=0;i<walk;i++)	
		for(int j=0;j<4;j++)
        {
        	//cout << go[j][i] << endl;
            if(go[j][i]=='N'){
                if(savei[j]-1>=0)
                {
                    int check=0;
                    for(int a=0;a<4;a++)
                    {
                        if(a!=j&&savei[j]-1==savei[a]&&savej[j]==savej[a])
                        {
                            check=1;
                            break;
                        }
                    }
                    if(check==0)
                    {
                        savei[j]--;
                        arr[savei[j]][savej[j]]=j+1;
                    }
                }
            }
            if(go[j][i]=='E'){
                if(savej[j]+1<N)
                {
                    int check=0;
                    for(int a=0;a<4;a++)
                    {
                        if(a!=j&&savei[j]==savei[a]&&savej[j]+1==savej[a])
                        {
                            check=1;
                            break;
                        }
                    }
                    if(check==0)
                    {
                        savej[j]++;
                        arr[savei[j]][savej[j]]=j+1;
                    }
                }
            }
            if(go[j][i]=='S'){
                if(savei[j]+1<N)
                {
                    int check=0;
                    for(int a=0;a<4;a++)
                    {
                        if(a!=j&&savei[j]+1==savei[a]&&savej[j]==savej[a])
                        {
                            check=1;
                            break;
                        }
                    }
                    if(check==0)
                    {
                        savei[j]++;
                        arr[savei[j]][savej[j]]=j+1;
                    }
                }
            }
            if(go[j][i]=='W'){
                if(savej[j]-1>=0)
                {
                    //cout << "gogo";
                    int check=0;
                    for(int a=0;a<4;a++)
                    {
                        if(a!=j&&savei[j]==savei[a]&&savej[j]-1==savej[a])
                        {
                            check=1;
                            break;
                        }
                    }
                    if(check==0)
                    {
                        savej[j]--;
                        arr[savei[j]][savej[j]]=j+1;
                    }
                }
            }
        }
    
    /*for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }*/
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            countt[arr[i][j]-1]++;
            if(countt[arr[i][j]-1]==maxx){
                countofmax++;
            }
            if(countt[arr[i][j]-1]>maxx){
                maxx = countt[arr[i][j]-1];
                countofmax=1;
            }
            if(arr[i][j]==0)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << countofmax << " " << maxx << endl;
    for(int i=0;i<4;i++)
    {
        if(countt[i]==maxx)
            cout << i+1 << endl;
    }



}


