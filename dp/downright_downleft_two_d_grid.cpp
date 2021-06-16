#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
     

    int dp[n][m+2];
    for(int i=0;i<n;i++)dp[i][0]=1e8;
    for(int i=0;i<n;i++)dp[i][m+1]=1e8;
    	for(int i=1;i<m+1;i++)dp[n-1][i]=a[n-1][i-1];
    for(int i=n-2;i>=0;i--)
    {
    	for(int j=1;j<m+1;j++ )
    	{
    		dp[i][j]=a[i][j-1]+min(dp[i+1][j],min(dp[i+1][j-1],dp[i+1][j+1]));
    	}
    }



    for(int i=0;i<n;i++)
    {
    	for(int j=1;j<m+1;j++)cout<<dp[i][j]<<" ";cout<<endl;
    }


}