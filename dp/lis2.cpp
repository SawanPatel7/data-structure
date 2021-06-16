#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   vector<int>v;
   v.push_back(a[0]);
   for(int i=1;i<n;i++)
   {
   	  int x=lower_bound(v.begin(),v.end(),a[i])-v.begin();
   	  if(x==v.size())
   	  {
         v.push_back(a[i]);
   	  }
   	  v[x]=a[i];
   }
   cout<<v.size()<<endl;	
}