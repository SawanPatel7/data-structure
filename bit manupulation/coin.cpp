#include<bits/stdc++.h>
#define ll long long 
#define m ((ll)(1e9+7))
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll k=a+b;
		if((a+b)%3)
			cout<<"NO"<<endl;
		else
		{
			if(a>=k/3&&b>=k/3)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}

}