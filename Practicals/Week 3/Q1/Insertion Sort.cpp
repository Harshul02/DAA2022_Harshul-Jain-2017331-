#include<iostream>
using namespace std;

void Insertion(int A[], int n)
{
    int x,i,j;
    int c=0;
    for(i=1; i<n; i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
            c++;
        }
        A[j+1]=x;
    }
    for(int i=0; i<n; i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl<<"Comparisons = "<<c<<endl;
        cout<<"Shifts = "<<c+n-1<<endl;

}

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
        Insertion(a,n);
    }
}
