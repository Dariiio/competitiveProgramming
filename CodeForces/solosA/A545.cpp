#include <bits/stdc++.h>
// https://codeforces.com/contest/1138/problem/A

//ACCEPTED
using namespace std;

int main(){
	
	int n,v[100100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>v[i];

	int last=-1,ans=0,a=0,b=0;
	for(int i=0;i<n;i++){
		if(v[i]!=last){
			if(v[i]==1) a=0,a++;
			else b=0,b++;
			last=v[i];
		}else{
			if(v[i]==1) a++;
			else b++;
		}
		ans = max(ans,min(a,b)*2);
	}
	cout<<ans;
	
	
	return 0;
}
