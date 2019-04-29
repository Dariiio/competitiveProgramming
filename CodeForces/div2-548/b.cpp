#include <bits/stdc++.h>
// https://codeforces.com/contest/1139/problem/B

//ACCEPTED
//Sin saber que era greedy nose si lo habria sacado
using namespace std;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	long long n,a[2000100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];

	long long x = a[n-1],sum;
	sum = x;
	for(int i=n-2;i>=0;i--){
		if(a[i]<x){
			sum += a[i];
			x = a[i];
		}
		else if(a[i]>=x){
			(x-1<0)?x=0:x=x-1;
			sum += x;
		}
	}
	cout<<sum;

	
	return 0;
}
