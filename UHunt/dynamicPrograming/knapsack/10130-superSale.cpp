#include<bits/stdc++.h>
using namespace std;

int t,n,g;
int p[1010],w[1010];
int dp[1010][35];

int f(int i,int wt){
	if(i>=n||wt==0)
		return 0;
	if(dp[i][wt]!=-1)
		return dp[i][wt];
	if(w[i]>wt)
		return dp[i][wt]=f(i+1,wt);
	else
		return dp[i][wt]=max(f(i+1,wt),p[i]+f(i+1,wt-w[i]));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		cin>>n;
		for(int i=0;i<n;i++)cin>>p[i]>>w[i];
		cin>>g;
		int wg,ans=0;
		while(g--){
			cin>>wg;
			ans+=f(0,wg);
		}
		cout<<ans<<"\n";
	}

	return 0;
}