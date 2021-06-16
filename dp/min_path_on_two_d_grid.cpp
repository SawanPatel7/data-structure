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
     
    int dp[n+1][m+1];


    for(int i=0;i<m;i++)dp[n][i]=1e8;
    for(int i=0;i<n;i++)dp[i][m]=1e8;
    dp[n][m-1]=0;
    dp[n-1][m]=0;
    


    for(int i=n-1;i>=0;i--)
    {
    	for(int j=m-1;j>=0;j--)
    	{
            dp[i][j]=a[i][j]+min(dp[i+1][j],dp[i][j+1]);
    	}
    }

    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)cout<<dp[i][j]<<" ";cout<<endl;
    }






}