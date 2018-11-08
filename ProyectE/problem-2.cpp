#include<bits/stdc++.h>
using namespace std;

int dp[5000000];

int f(int n){
	if(dp[n]!=-1) return dp[n];
	if(n<=0)return 0;
	if(n==1) return dp[n]=1;
	return dp[n]=f(n-1)+f(n-2);
}

int main()
{
	int sum=0;
	memset(dp,-1,sizeof(dp));
	//cout<<f(4000000);
	dp[0]=0;dp[1]=1;
	for(int i=2;i<=50;++i){
		dp[i]=dp[i-1]+dp[i-2];
		cout<<dp[i]<<"\n";
		if(dp[i]%2==0 && dp[i]<=4000000 && dp[i]>0)sum+=dp[i];
	}
	cout<<"SUM="<<sum;
	return 0;
}
