#include<iostream>
#include<math.h>
using namespace std;

int c=0;
void compare(int x)
{
    cout<<"no of comparisons: "<<x<<endl;
}
int jumpsearch(int a[], int n, int key)
{
    int i=0;
    int m=sqrt(n);
    while(a[m]<=key && m<n)
    {
        c++;
        i=m;
        m=m+sqrt(n);
        if(m>n-1)
            m=n;
    }
    for(int x=i; x<m; x++)
    {
        if(a[x]==key){
            return x;
        }
        else
            c++;
    }

    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        c=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;
        int j=jumpsearch(a,n,key);
        if(j==-1)
            cout<<endl<<"Not Present"<<endl;
        else{
            cout<<endl<<"Present"<<endl;
            }
            compare(c);
    }
    return 0;
}
