#include<bits/stdc++.h>

using namespace std;

int n,a[60000];

int f(int i,int mx,int p){
	if(i>=n) return 0;
	
	if(p==1){
		if(mx>=a[i]) return min( f(i+1,mx,0) +1 , f(i+1,mx,1) +mx );
		if(mx<a[i]){
			int d = a[i] - mx;
			mx = max(mx,a[i]);
			return min( f(i+1,mx,0) +1 , f(i+1,mx,1) +d );
		}
	}else{
		return min( f(i+1,mx,0)+1 , f(i+1,mx,1)+ mx );
	
	}
	
}


int main() {

	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
		
	int ans = min( f(0,a[0],0)+1 , f(0,a[0],1)+ a[0] );
	
	cout<<ans;
	
	return 0;
}
