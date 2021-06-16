#include<bits/stdc++.h>
#define            pb            push_back
#define            pl            pair<ll,ll>
#define            pll           pair<ll,pair<ll,ll>>
#define            ll            long long
#define            vl            vector<ll>
#define            fastio        ios_base::sync_with_stdio(false); cin.tie(NULL);
#define            mp            make_pair
#define            w(t)          int t;cin>>t;while(t--)
#define            inf           1e18
#define            fi(a,n)       for(ll i=a;i<n;i++)
#define            fr(i,a,b)     for(ll i=a;i>=b;i--)
#define            fj(a,n)       for(ll j=a;j<n;j++)
#define            k(a,n)        for(ll k=a;k<n;k++)
#define            endl          "\n"
#define            all(v)        (v.begin(),v.end())
#define            set1(x)       __builtin_popcount(x)
#define            gcd(a,b)      __gcd(a,b)
using namespace std;
const ll mod= 1000000007;
const ll N =10065;
ll inv(ll x,ll n,ll m)
{
	ll a=1;
   while(n)
   {
   	if(n%2)
   		a=a*x%m;
   	n/=2;
   	x=(x*x)%m;


   }
   return a;
}
ll com(ll n,ll k)
{
	ll ans=1;
	if(k>n-k)k=n-k;
	for(ll i=1;i<=k;i++)
	{
		ans=(ans*(n-i+1))%mod;ans=(ans*(inv(i,mod-2,mod)))%mod;
	}
	return ans;
}
ll f[N];
void fun()
{
	f[0]=f[1]=1;
	fi(2,N)f[i]=(f[i]*i)%mod;
}

void solve()
{
   ll n,m;
   cin>>n>>m;
   cout<<com(n+2*m-1,2*m)<<endl;
}
int main()
{
	/*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif*/
    int t=1;
    //cin>>t;
    while(t--)
    	solve();

}