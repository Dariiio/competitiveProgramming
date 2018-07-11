#include<bits/stdc++.h>
using namespace std;

int n,t;
vector<int> v,dp;

int f(int i){
	int &r=dp[i];
	if(r!=0) return r;
	r=1;
	for(int j=0;j<i;j++)
		if(v[i]<=v[j] && dp[j]+1>dp[i])
			dp[i]=dp[j]+1;
	return r;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	t=0;
	while(cin>>n){
		if(n==-1){
			t++;
			for(int i=0;i<v.size();i++){
				dp[i]=f(i);
			}
			(t==1)?cout<<"Test #"<<t<<":\n":cout<<"\nTest #"<<t<<":\n";
			cout<<"  maximum possible interceptions: "<<*max_element(dp.begin(),dp.end())<<"\n";
			v.clear();
			dp.clear();
			cin>>n;
			if(n==-1)break;
		}
		v.push_back(n);
		dp.push_back(0);
	}
	return 0;
}
