#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/1016/A

// ACCEPTED
using namespace std;

int main(){

	int n,m,x,r=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x;
		r += x;
		cout<<r/m<<" ";
		r = r%m;
	}
	
	
	return 0;
}
