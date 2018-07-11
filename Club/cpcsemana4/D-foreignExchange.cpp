#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n){
		if(n==0)break;
		int a[n],b[n];
		bool c=true;
		for(int i=0;i<n;i++)cin>>a[i]>>b[i];
		
		sort(a,a+n);
		sort(b,b+n);
		
		for(int i=0;i<n;i++){
			(a[i]!=b[i])?c=false:0;
		}
		
		c?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
