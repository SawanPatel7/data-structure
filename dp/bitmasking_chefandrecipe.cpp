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
#define            all(v)        (v).begin(),(v).end()
#define            set1(x)       __builtin_popcount(x)
#define            gcd(a,b)      __gcd(a,b)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
using namespace std;
const ll mod= 1000000007;
const ll N =1000005;
void solve()
{
     ll n;cin>>n;
     map<char,ll>m;
     m['a']=0;
     m['i']=1;
     m['o']=2;
     m['u']=3;
     m['e']=4;
     ll f[32]={0};
     while(n--)
     {
        string s;
        cin>>s;
        ll h[5]={0};
        ll sum=0;
        for(int i=0;i<s.size();i++)
        {
          if(h[m[s[i]]]==0)
          {
              sum+=(1<<(m[s[i]]));
              h[m[s[i]]]++;
          }
        }

        f[sum]++;
     }
   //  for(int i=1;i<32;i++)cout<<f[i]<<" ";cout<<endl;
     ll ans=0;
     for(ll i=1;i<31;i++)
     {
      for(ll j=i+1;j<32;j++)
      {
           if((i|j)==31)
           {
              // cout<<i<<" "<<j<<endl;
               ans+=(f[i]*f[j]);
           }
      }
     }
    ans+=((f[31]*(f[31]-1))/2);
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
      w(t)
      solve();

}