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
const ll N =1000005;

void solve()
{
   ll a,b;
   cin>>a>>b;
   ll d=b-a;
   ll ans=0;
   fi(0,32)
   {
      if(d>(1<<i))continue;
      else {if((a&(1<<i))&&(b&(1<<i)))ans+=(1<<i);}
   }
   cout<<ans<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--)
    	solve();

}