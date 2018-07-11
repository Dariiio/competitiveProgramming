#include<bits/stdc++.h>
using namespace std;

vector<int> v, dp, bt;

int f(int i){
	int &r=dp[i];
	if(r!=0) return r;
	r=1;
	for(int j=0;j<i;j++)
		if(v[i]>v[j] && dp[j]+1>dp[i])
			dp[i]=dp[j]+1;
	return r;
}
void fbt(int i){
	for(int j=i;j>=0;j--){
		if(f(i)==f(j)+1){
			fbt(j);
			break;
		}
	}
	bt.push_back(v[i]);
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	freopen("481.txt","r",stdin);
	int tmp;
	while(cin>>tmp){
		v.push_back(tmp);
		dp.push_back(0);
	}
	for(int i=0;i<v.size();i++){
		dp[i]=f(i);
	}
	int maxi=*max_element(dp.begin(),dp.end());
	cout<<maxi<<"\n-\n";
	for(int i=0;i<v.size();i++){
		fbt(i);
	}
	int e=bt.size()-1;
	for(int i=0;i<maxi;i++){
		cout<<bt[e]<<"\n";
		e--;
	}
	return 0;
}
