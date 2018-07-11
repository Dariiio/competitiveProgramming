#include<bits/stdc++.h>
using namespace std;

int t,n, v[1001], dp[1001];

int f(int i){
	int &r=dp[i];
	if(r!=0) return r;
	r=1;
	for(int j=0;j<i;j++){
		if(v[i]>v[j])
			r=max(r,dp[j]+1);
	}
	return r;
}

void fbt(int i){
	for(int j=i;j>=0;j--)
		if(f(i)==f(j)+1){
			fbt(j);
			break;
		}
	cout<<v[i]<<" ";
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)cin>>v[i];
		
		memset(dp,0,sizeof(dp));
		
		for(int i=0;i<n;i++){
			dp[i]=f(i);
			fbt(i);
		}
		cout<<*max_element(dp,dp+n)<<"\n";
		
	}
	return 0;
}
