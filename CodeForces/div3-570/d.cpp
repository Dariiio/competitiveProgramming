#include <bits/stdc++.h>
//https://codeforces.com/contest/1183/problem/D

// ACCEPTED
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int q,n,ax,ans;
	
	cin>>q;
	while(q--){
		cin>>n;vector<int> a(n+1);
		
		for(int i=0;i<n;i++) cin>>ax,a[ax]++;
		
		sort(a.rbegin(),a.rend());
		ans = a[0];int last = a[0];
		
		for(int i=1;i<=n;i++){
			if(last==0) break;
			if(a[i] >= last){
				ans += last -1;
				last -= 1;
			}else{
				ans +=a[i];
				last = a[i];
			}
		}
		cout<<ans<<"\n";
		
	}


	return 0;
}
