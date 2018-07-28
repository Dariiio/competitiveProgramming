#include<bits/stdc++.h>
using namespace std;

int n,m,v[1001];
int dp[10000][10000];


int f(int i,int wt){
	if(i>=n||wt==0)
		return 0;
	if(dp[i][wt]!=-1)
		return dp[i][wt];
	if(w[i]>wt)
		return dp[i][wt]=f(i+1,wt);
	else
		return dp[i][wt]=max(f(i+1,wt),1);
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n;
	while(n--){
		cin>>m;
		int sum=0;
		for(int i=0;i<m;i++){
			cin>>v[i];
			sum+=v[i];
		}

		
	}
	return 0;
}