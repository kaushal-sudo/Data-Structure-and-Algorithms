#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,i,j,sum,a[100000];
	cin>>n>>sum;
	for(i=0;i<n;cin>>a[i],++i);
	int dp[n+1][sum+1];
	memset(dp,0,sizeof(dp));
	for(dp[0][0]=0,i=1;i<=n;++i){
	    for(j=1;j<=sum;++j){
	        if(a[i-1]<=j)dp[i][j]=((dp[i][j-a[i-1]])+(dp[i-1][j]));
	        else dp[i][j]=dp[i-1][j];
	    }
	}
	cout<<dp[n][sum]<<"\n";
	return 0;
}
