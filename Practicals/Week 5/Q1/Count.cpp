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
        char a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int b[27];
        for(int i=0; i<27; i++)
        {
            b[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            b[a[i]-97]++;
        }
        int k=0;
        int max=1;
        for(int i=0; i<27; i++)
        {
            if(b[i]>max)
            {
                max=b[i];
                k=i;
            }
        }
        if(max>1)
        {
            cout<<char(k+97)<<" - "<<max<<endl;
        }
        else
            cout<<"No Duplicates Present"<<endl;
    }
}
