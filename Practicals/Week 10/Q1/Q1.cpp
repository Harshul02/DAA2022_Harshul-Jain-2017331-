#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
return a.second<b.second;
}
int main(){
int n;
cin>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++)
{
cin>>v[i].first;
}
for(int i=0;i<n;i++)
cin>>v[i].second;
sort(v.begin(),v.end(),cmp);
int count=1;
cout<<v[0].first<<"-"<<v[0].second<<" ";
int k=0;
for(int i=1;i<n;i++)
{
if(v[i].first>=v[k].second)
{count++;
k=i;
cout<<v[i].first<<"-"<<v[i].second<<" ";}
}
cout<<" maximum activity that can be done is: "<<count;
return 0;
}
