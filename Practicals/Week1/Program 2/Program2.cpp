#include<iostream>
using namespace std;

int main()
{
    int c=0,r=0;
    int n,f;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<endl<<"Input the array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Enter the key to find: ";
    cin>>f;
    cout<<endl;
    int s=0;
    if(n%2==0)
        s=n/2;
    else
        s=n/2+1;

    if(f==a[s-1])
    {
        cout<<"Key found at location : "<<s<<endl;
        cout<<"No of iteration : "<<1<<endl;
    }
    else if(f<a[s-1])
    {
        for(int i=0; i<s-1; i++)
        {
            if(a[i]!=f)
            {
                c++;
            }
            else{
                cout<<"Key found at location : "<<i+1<<endl;
                cout<<"No of iteration : "<<i+1<<endl;
                break;
            }
            if(c==s-1)
            {
                cout<<"Key not Found"<<endl;
                cout<<"No of iteration: "<<c<<endl;
            }
        }
    }
    else
    {
        for(int i=s; i<n; i++)
        {
            if(a[i]!=f)
            {
                r++;
            }
            else{
                cout<<"Key found at location : "<<i+1<<endl;
                cout<<"No of iteration : "<<r+1<<endl;
                break;
            }
            if(r==s-1)
            {
                cout<<"Key not Found"<<endl;
                cout<<"No of iteration: "<<r<<endl;
            }
    }
    }
    return 0;
}
