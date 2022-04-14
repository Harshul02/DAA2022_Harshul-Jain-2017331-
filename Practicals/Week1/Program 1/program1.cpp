#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cin>>f;
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=f)
                c++;
            else{
                cout<<"Present "<<i+1<<endl;
                break;
            }
        }
        if(c==n)
        {
            cout<<"Not Present "<<c<<endl;
        }
    }
    return 0;
}
