#include<bits/stdc++.h>

using namespace std;



int main() {
	
	int n,ans;
	
	cin>>n;
	
	ans = (n*(n-1))/2;
	
	if(n==1){ cout<<1;return 0;}
	
	
	if(ans%2==0) cout<<ans;
	else cout<<ans+1;
	
	
	return 0;
}
