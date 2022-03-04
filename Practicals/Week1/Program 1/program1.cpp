#include<iostream>
using namespace std;

int main()
{
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
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=f)
            c++;
        else{
            cout<<"Element found on position : "<<i+1<<endl;
            cout<<"No of iterations : "<<c+1<<endl;
            break;
        }
    }
    if(c==n)
    {
        cout<<"Element not found"<<endl;
        cout<<"No of iterations : "<<c<<endl;
    }

    return 0;
}
