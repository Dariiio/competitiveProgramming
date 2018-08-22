#include<bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
int v[51],dp[51][51];

int cut(int left,int right,int l_idx,int r_idx){
	int len=right-left;
	if(l_idx==r_idx)
		return len;
	else if(l_idx>r_idx)
		return 0;
	else if(dp[l_idx][r_idx]!=1e9)
		return dp[l_idx][r_idx];

	for(int i=l_idx;i<=r_idx;i++)
		dp[l_idx][r_idx]=min(dp[l_idx][r_idx],cut(left,v[i],l_idx,i-1)+cut(v[i],right,i+1,r_idx)+len);
	return dp[l_idx][r_idx];
}

int main()
{
	int len,n,i;
	while(cin>>len){
		if(len==0)break;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>v[i];
		for(i=0;i<51;i++)
			for(int j=0;j<51;j++)
				dp[i][j]=1e9;
		
		printf("The minimum cutting is %d.\n", cut(0, len, 0, n - 1));
	}
	return 0;
}