#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;
        int x=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(abs(a[i]-a[j])==key)
                {
                    x++;
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
