#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
if((1.0*a.first)/a.second>(1.0*b.first)/b.second)
return true;
return false;
}
int main(){
int n;
cin>>n;
vector<pair<int,int>>v;
for(int i=0;i<n;i++)
{
int duration,deadline;
cin>>duration>>deadline;
v.push_back(make_pair(duration,deadline));
}
sort(v.begin(),v.end(),cmp);
vector<pair<int,int>>ans;
int j=0;
for(int i=0;i<n;i++)
{
if(v[i].first+j<=v[i].second)
{ans.push_back(v[i]);
j++;}
}
cout<<"Selected tasks numbers:"<<ans.size()<<endl;
for(auto val:ans)
{
cout<<val.first<<"-"<<val.second<<" ";
}
return 0;
}
