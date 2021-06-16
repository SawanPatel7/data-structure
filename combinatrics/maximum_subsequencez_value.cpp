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
   ll n;cin>>n;ll a[n];fi(0,n)cin>>a[i];ll ans=0;ll f=1;ll k=max(f,n-2);
   for(ll i=63;i>=0;i--){ll s=0;
   	fj(0,n){
           if((a[j]&(f<<i)))s++;
   	}
   	//cout<<s<<" ";
   	
   	if(s)ans+=(f<<i);
   }
  cout<<ans<<endl;
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