#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/520/B

// RESOLVER
using namespace std;

int n,m;

int f(int x){
	if(x<0) return 0;
	if(x>n) return 0;
	if(x==n) return 1;
	return min(f(x/2),f(x+1))+1;
}


int main(){

	cin>>n>>m;
	cout<<f(m);

	return 0;
}
