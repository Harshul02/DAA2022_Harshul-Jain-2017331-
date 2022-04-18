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

void print(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        MergeSort(a,0,n-1);
        int m;
        cin>>m;
        int b[m];
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        MergeSort(b,0,m-1);
        print(a,b,n,m);
        return 0;
}
