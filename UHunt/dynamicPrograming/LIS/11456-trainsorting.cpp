#include<bits/stdc++.h>
using namespace std;

int t,n,v[20000],dp[20000];

int f(int i){
	int &r=dp[i];
	if(r!=0)return r;
	r=1;
	for(int j=0;j<i;j++)
		if(v[i]>v[j] && dp[j]+1>dp[i])
			dp[i]=dp[j]+1;
	return max(r,dp[i]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)cin>>v[i];
		
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++)
			v[i]=f(i);
			
		cout<<*max_element(dp,dp+n)<<"\n";
	}
	return 0;
}
