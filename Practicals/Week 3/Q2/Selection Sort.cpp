#include<iostream>
using namespace std;

int swap(int *p,int *q)
{
    int x=0;
    int temp=*p;
    *p=*q;
    *q=temp;
    x++;
    return x;
}

void Selection(int A[], int n)
{
    int i,j,k;
    int c=0,x=0;
    for(i=0; i<n-1; i++)
    {
        for(j=k=i; j<n; j++)
        {
            c++;
            if(A[j]<A[k])
               {
                  k=j;
               }
        }
        x = x + swap(&A[i], &A[k]);
    }
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl<<"Comparisons = "<<c-x<<endl;
    cout<<"Swaps = "<<x<<endl;
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
        Selection(a,n);
    }
    return 0;
}
