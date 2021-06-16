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
   ll n,k;cin>>n>>k;ll a[n];
   fi(1,k+1)a[i-1]=i;
   fi(1,n-k+1)a[k+i-1]=k-i;
   ll h[k+5]={0};
   vl v;
   for(ll i=n-1;i>=0;i--)
   {
   	if(h[a[i]]==0){
   		v.pb(a[i]);h[a[i]]++;
   	}
   }

   for(ll i=v.size()-1;i>=0;i--)
   	cout<<v[i]<<" ";
   cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    	solve();

}