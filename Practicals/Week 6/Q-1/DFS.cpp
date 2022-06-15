#include<iostream>
using namespace std;

int flag=0;

void DFS(int G[][6], int start, int n)
{
    static int visited[6]={0};

    if(visited[start]==0)
    {
        visited[start]=1;
        for(int j=1;j<n;j++)
        {
            if(G[start][j]==1 && visited[j]==0)
                DFS(G,j,n);
        }
    }

    for(int i=0; i<6; i++)
    {
        if(visited[i]!=1)
        {
            flag=1;
            break;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int G[6][6];
    for(int i=0; i<n+1; i++)
    {
        G[0][i]=0;
        G[i][0]=0;
    }
    for(int i=1; i<n+1; i++)
    {
        for(int j=1;j<n+1; j++)
        {
            cin>>G[i][j];
        }
    }
    int start, end;
    cin>>start>>end;
    DFS(G,start,end+1);
    if(flag==0)
    {
        cout<<"No such path exists"<<endl;
    }
    else
        cout<<"Yes Path Exists"<<endl;
    return 0;
}
