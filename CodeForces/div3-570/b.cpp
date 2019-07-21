#include <bits/stdc++.h>
// https://codeforces.com/contest/1183/problem/B

// ACCEPTED FACIL, MATH
using namespace std;

int main()
{
	int q,n,k,a[110];
	
	cin>>q;
	while(q--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		
		int mink = a[0]+k,
		maxk = a[n-1]-k;
		
		if(maxk > mink) cout<<-1<<"\n";
		else cout<<mink<<"\n";
		
	}
	
	return 0;
}
