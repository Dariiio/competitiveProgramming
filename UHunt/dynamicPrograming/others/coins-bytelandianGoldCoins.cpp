#include<bits/stdc++.h>
using namespace std;

map<int,long long> dp;

long long f(int n){
	if(n==0) return 0;
	if(dp[n]!=0)return dp[n];
	long long c=f(n/2)+f(n/3)+f(n/4);
	dp[n]=(c>n)?c:n;
	return dp[n];
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	while(cin>>n){
		cout<<f(n)<<"\n";		
	}
	return 0;
}