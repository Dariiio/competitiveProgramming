#include<bits/stdc++.h>
using namespace std;

int n,a,s[22], v[22];

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n){
		for(int i=1;i<=n;i++){
			cin>>a;
			s[a]=i;
		}
		
		for(int i=0;i<n+1;i++)cout<<s[i]<<" ";
		
		
	}
	return 0;
}
