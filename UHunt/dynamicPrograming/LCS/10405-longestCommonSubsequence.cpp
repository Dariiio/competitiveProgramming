#include<bits/stdc++.h>
using namespace std;

char a[1024],b[1024];
int dp[1024][1024];

int maxval(int a, int b){
    return a > b ? a : b;
}

int lcs(int n, int m){
	if(dp[n][m]!=-1)
		return dp[n][m];
	if(a[n-1]==b[m-1])
		dp[n][m]=1+lcs(n-1,m-1);
	else
		dp[n][m]=maxval(lcs(n-1,m),lcs(n,m-1));
	return dp[n][m];
}

int main()
{
	int i,j;
	while(gets(a)&&gets(b)){
		int xlen=strlen(a);
		int ylen=strlen(b);

		for(i =1 ; i <= xlen; ++i)
		    for(j =1; j <= ylen; ++j)
		            dp[i][j] = -1;
		//memset(dp,-1,sizeof(dp));
		cout<<lcs(strlen(a),strlen(b))<<"\n";
	}
	return 0;
}