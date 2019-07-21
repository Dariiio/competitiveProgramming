#include <bits/stdc++.h>
// https://codeforces.com/contest/1159/problem/A


// ACCEPTED
using namespace std;

int main()
{
	int n,ans=0;char c;
	cin>>n;
	while(n--){
		cin>>c;
		if(c=='+')
			ans++;
		else{
			(ans<=0)?ans = 0:ans--;
		}
	}
	(ans<0)?cout<<0:cout<<ans;

	return 0;
}
