#include<iostream>
#include<queue>
using namespace std;

bool BFS(int G[][6], int start)
{
    int i=start;
    queue<int> q;
    int visited[6]={0};
    visited[i]=1;
    q.push(i);

    while(!q.empty())
    {
        i=q.front();
        q.pop();
        if(G[i][i]==1)
            return false;

        for(int j=1;j<6;j++)
        {
            if(G[i][j] && visited[j]==0)
            {
                visited[j]=1 - visited[i];
                q.push(j);
            }
            else if(G[i][j] && visited[i] == visited[j])
                return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int G[6][6];
    for(int i=0; i<n+1; i++)
    {
        G[i][0]=0;
        G[0][i]=0;
    }
    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<n+1; j++)
        {
            cin>>G[i][j];
        }
    }
    BFS(G,1)?cout<<"Yes Bipartite"<<endl: cout<<"Not Bipartite"<<endl;
    return 0;
}

