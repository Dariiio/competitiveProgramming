#include<bits/stdc++.h>
using namespace std;

#define INF 1e9
int T[1010][1010],m,n,dp[1010][1010];

int f(int i,int j){
	int &r=dp[i][j];
	if(r!=-1)return r;
	if(i==m-1 && j==n-1)return r=T[m-1][n-1];
	r=INF;
	if(i<m-1) r=min(r,T[i][j]+f(i+1,j));
	if(j<n-1) r=min(r,T[i][j]+f(i,j+1));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	memset(dp,-1,sizeof(dp));
	cout<<f(0,0);

	return 0;
}