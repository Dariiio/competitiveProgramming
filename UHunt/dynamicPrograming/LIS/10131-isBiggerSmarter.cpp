#include<bits/stdc++.h>
using namespace std;

struct E
{
	int w;
	int q;
	int id;
};

E s[10001];
int dp[10001];

bool comp(E &a, E &b){
	if(a.w!=b.w)
		return a.w<b.w;
	return a.q>b.q;
}
/*
int lisW(int i){
	int &r=dp[i];
	if(r!=0)
		return r;
	r=1;
	for(int j=0;j<i;j++)
		if(s[i].w<s[j].w )
			r=max(r,dp[j]+1);
	return r;
}*/

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("10131.txt","r",stdin);
	int n=0;
	while(scanf("%d %d",&s[n].w, &s[n].q)==2){
		s[n].id=n+1;
		n++;
	}

	//for(int i=0;i<n;i++)
	//	printf("%d %d %d\n",s[i].w, s[i].q,s[i].id);

	//memset(dp,0,sizeof(dp));
	for(int i=1;i<10001;i++)
		dp[i]=1;

	sort(s,s+n,comp);

	/*
	for(int i=0;i<n+1;i++)
		dp[i]=lisW(i);
	*/
	//LIS double Bottom-up
	for(int i=1;i<n;i++)
		for(int j=0;j<i;j++)
			if(s[j].w<s[i].w && s[j].q>s[i].q)
				dp[i]=max(dp[j]+1,dp[i]);

	cout<<*max_element(dp,dp+n+1)<<"\n";

	return 0;
}