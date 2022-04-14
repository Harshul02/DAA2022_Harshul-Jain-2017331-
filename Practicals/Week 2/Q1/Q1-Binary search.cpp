#include <iostream>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int mid=n/2;
        int key;
        cin>>key;
        if(key==a[mid])
        {
            x++;
            for(int i=mid-1; i>=0; i--)
            {
                if(key==a[i])
                    x++;
            }
            for(int i=mid+1; i<n; i++)
            {
                if(key==a[i])
                    x++;
            }
        }
        else if(key<a[mid])
        {
            for(int i=mid-1; i>=0; i--)
            {
                if(key==a[i])
                    x++;
            }
        }
        else{
            for(int i=mid+1; i<n; i++)
            {
                if(key==a[i])
                    x++;
            }
        }
        cout<<key<<" - "<<x<<endl;
    }
    return 0;
}
