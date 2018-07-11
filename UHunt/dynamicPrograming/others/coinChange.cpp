#include<bits/stdc++.h>
using namespace std;
int t,m,n, v[301];
int dp[10000][10000];

int f(int n, int coinIndex, int m){
	if(n==0)return 1;
	if(dp[n][coinIndex]!=-1)return dp[n][coinIndex];
	int ways=0;
	for(int i=coinIndex;i<m;i++)
		if(n>=v[i])
			ways+=f(n-v[i],i,m);
	return dp[n][coinIndex]=ways;
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>m;
		for(int i=0;i<m;i++)cin>>v[i];
		cin>>n;
		memset(dp,-1,sizeof(dp));
		cout<<f(n,0,m)<<"\n";
	}
	return 0;
}