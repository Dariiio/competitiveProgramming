#include <bits/stdc++.h>
// PROBLEMA PARA PROPONER
// https://codeforces.com/contest/1136/problem/A
//ACCEPTED

using namespace std;

int main(){

	int n,k,l,r,v[1000001];
	
	cin>>n;
	memset(v,0,sizeof(v));
	for(int i=0;i<n;i++){
		cin>>l>>r;
		v[r] = 1;
	}
	cin>>k;int ans=0;
	for(int i=1;i<k;i++){
		if(v[i]==1) ans++;
	}
	cout<<n-ans;
	
	
	return 0;
}
