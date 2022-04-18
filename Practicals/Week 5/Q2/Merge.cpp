#include<iostream>
using namespace std;

void Merge(int A[], int l, int mid, int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];

    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    for(; i<=mid; i++)
        B[k++]=A[i];
    for(; j<=h; j++)
        B[k++]=A[j];

    for(i=l; i<=h; i++)
    {
        A[i]=B[i];
    }
}

void MergeSort(int A[], int l, int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}

void findPair(int A[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (A[low] + A[high] == target)
        {
            cout<< A[low]<<" , "<<A[high]<<endl;
            return;
        }
        (A[low] + A[high] < target)? low++: high--;
    }
    cout<<"No Such Element Exist"<<endl;;
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
        int target;
        cin>>target;
        MergeSort(a,0,n-1);
        findPair(a,n,target);
    }
    return 0;
}
