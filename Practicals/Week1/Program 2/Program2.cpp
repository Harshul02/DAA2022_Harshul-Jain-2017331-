#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,r=0;
        int n,f;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cin>>f;
        cout<<endl;
        int s=0;
        s=n/2;

        if(f==a[s])
        {
            cout<<"Present"<<endl;
            cout<<"No of comparisions: "<<1<<endl;
        }
        else if(f<a[s])
        {
            for(int i=0; i<s; i++)
            {
                if(a[i]!=f && f<a[i])
                {
                    c++;
                    cout<<"Not Present"<<endl;
                    cout<<"No. of comparisions: "<<c+1<<endl;
                    break;
                }
                else if(a[i]!=f)
                {
                    c++;
                }
                else if(a[i]==f){
                    cout<<"Present"<<endl;
                    cout<<"No of comparisions: "<<c+2<<endl;
                    break;
                }
                if(c==s)
                {
                    cout<<"Not Present"<<endl;
                    cout<<"No of comparisions: "<<c+1<<endl;
                }
            }
        }
        else
        {
            for(int i=s+1; i<n; i++)
            {
                if(a[i]!=f && f<a[i])
                {
                    r++;
                    cout<<"Not Present"<<endl;
                    cout<<"No. of comparisions: "<<r+1<<endl;
                    break;
                }
                else if(a[i]!=f)
                {
                    r++;
                }
                else if(a[i]==f){
                    cout<<"Present"<<endl;
                    cout<<"No of comparisions: "<<r+2<<endl;
                    break;
                }
                if(r==s)
                {
                    cout<<"Not Present"<<endl;
                    cout<<"No of comparisions: "<<r+1<<endl;
                }
        }
        }
    }
    return 0;
}
