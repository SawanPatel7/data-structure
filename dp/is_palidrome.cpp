#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	int dp[n+1][n+1];
	for(int i=0;i<=n;i++)dp[0][i]=1;
	for(int i=1;i<=n;i++)dp[1][i]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(s[j-i]==s[j-1]&&dp[i-2][j-1])
			{
                  dp[i][j]=1;
			}
			else dp[i][j]=0;
		}
	}
   


    

	if(dp[n][n])cout<<"YES"<<endl;else cout<<"NO"<<endl;
}