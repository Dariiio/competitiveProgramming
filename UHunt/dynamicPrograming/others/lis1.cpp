#include<bits/stdc++.h>
using namespace std;
int t,n, v[1001], dp[1001];

int f(int v[], int n){
	int max2=0;
	//for(int i=0;i<n;i++)dp[i]=1;
	memset(dp,1,sizeof(dp));
	for(int i=1;i<n;i++)
		for(int j=0;j<i;j++)
			if(v[i]>v[j] && dp[j]+1>dp[i])
				dp[i]=dp[j]+1;
	
	//for(int i=0;i<n;i++)
	//	dp[i]>max?max=dp[i]:0;
	max2=*max_element(dp,dp+n);
	return max2;
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)cin>>v[i];
		cout<<f(v,n)<<"\n";
		
	}
	return 0;
}
