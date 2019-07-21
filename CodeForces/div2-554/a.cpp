#include <bits/stdc++.h>
// https://codeforces.com/contest/1152/problem/A

//ACCEPTED
using namespace std;

int main()
{
	
	int n,m,a,b,ap=0,bp=0,ai=0,bi=0;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
		cin>>a,(a%2==0)?ap++:ai++;

	
	for(int i=0;i<m;i++)
		cin>>b,(b%2==0)?bp++:bi++;
	
	cout<<min(ai,bp) + min(ap,bi);
	
	return 0;
}
