#include <bits/stdc++.h>
// https://codeforces.com/contest/1148/problem/A

// ACCEPTED
using namespace std;

int main()
{
	long long a,b,c;
	cin>>a>>b>>c;
	
	cout<<2*c+min(a,b+1)+min(a+1,b);

	return 0;
}
