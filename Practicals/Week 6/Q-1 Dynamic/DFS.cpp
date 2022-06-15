#include<iostream>
#include<stack>
#include<vector>
using namespace std;

bool isPathDFS(vector<vector<int>> &v, int start, int end)
{
    stack<int>st;
    int n=v[0].size();
    int visited[n]={0};
    int i=start;
    int flag=0;
    st.push(i);
    visited[i]=1;
    while(!st.empty())
    {
        i=st.top();
        st.pop();
        for(int j=0; j<n; j++)
        {
            if(v[i][end]==1)
            {
                flag=1;
                break;
            }
            else if(v[i][j]==1 && visited[j]==0)
            {
                visited[j]=1;
                st.push(j);
            }
        }
    }
    if(flag==1)
        return true;
    else
        return false;
}

int main()
{
    vector<vector<int>> v;
    int n,val;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<int> row;
        for(int j=0; j<n; j++)
        {
            cin>>val;
            row.push_back(val);
        }
        v.push_back(row);
    }
    int s,e;
    cin>>s>>e;
    if(isPathDFS(v,s-1,e-1))
    {
        cout<<"Yes Path Exists"<<endl;
    }
    else{
        cout<<"No Such Path Exists"<<endl;
    }
    return 0;
}