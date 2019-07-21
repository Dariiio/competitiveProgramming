#include <bits/stdc++.h>
// https://codeforces.com/contest/1163/problem/A

// ACCEPTED
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	if(m>n/2) cout<<n-m;
	else if(m==0) cout<<1;
	else cout<<m;
	
	return 0;
}
