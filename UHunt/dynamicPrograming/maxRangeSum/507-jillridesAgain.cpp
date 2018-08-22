#include<bits/stdc++.h>
using namespace std;

int t,s,v[20100];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>s;
		for(int i=0;i<s-1;i++)cin>>v[i];
		int sum=0,ans=0;
		for(int i=0;i<s-1;i++){
			sum+=v[i];
			ans=max(ans,sum);
			if(sum<0)sum=0;
		}
		cout<<ans;
	}	
	return 0;
}