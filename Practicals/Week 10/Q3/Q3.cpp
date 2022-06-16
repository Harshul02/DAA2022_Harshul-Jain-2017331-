#include <iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>&nums){
 int n=nums.size();
int i,votes=0,c=-1;
 for(int i=0;i<n;i++)
 {
 if(votes==0)
 {c=nums[i];
 votes=1;
 }
 else if(c==nums[i])
 votes++;
 else
 votes--;
 
 }
 if(c!=-1)
 cout<<"yes"<<endl;
 else
 cout<<"no";
 return c;
}
int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 cin>>v[i];
 int f=majorityElement(v);
 if(f!=-1)
 cout<<f<<endl;
 return 0;
}
