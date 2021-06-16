#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int dp[n];
    dp[0]=1;
    map<int,int>m;
    m[a[0]]=dp[0];
    for(int i=1;i<n;i++)
    {
    	auto t=m.lower_bound(a[i]);
    	if(t==m.begin())dp[i]=1;
    	else{t--; dp[i]=1+t->second;}

    	int adv=dp[i];

    	if(m[a[i]]>=adv)continue;

    	m[a[i]]=adv;
    	auto p=m.find(a[i]);
    	p++;
    	while(p!=m.end()&&p->second<=adv)
    	{
    		auto temp=p;
    		p++;
    		m.erase(temp);
    	}


    }


    cout<<*max_element(dp,dp+n)<<endl;
}