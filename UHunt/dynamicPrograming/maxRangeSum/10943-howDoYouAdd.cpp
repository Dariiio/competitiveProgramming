#include<bits/stdc++.h>
using namespace std;

int N,K;
long long dp[11000][11000];

long long f(int n,int i){
	if(i==K){
		if(n==0) return 1;
		else return 0;
	}
	if(i>K || n<0) return 0;
	long long &ret=dp[n][i];
	if(ret!=-1) return ret;
	long long ans=0;
	ret=0;
	for(int j=0;j<=N;j++)
		ret+=f(n-j,i+1);
	return ret%=1000000;
}

int solve(int n,int k){
	if(k==1)return 1;
	long long &ret=dp[n][k];
	if(ret!=-1)return ret;
	ret=0;
	for(int i=0;i<=n;i++)
		ret+=solve(i,k-1);
	return ret%=1000000;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	memset(dp,-1,sizeof(dp));
	while(cin>>N>>K){
		if(N==0&&K==0)break;
		cout<<solve(N,K)%1000000<<"\n";
	}	
	return 0;
}