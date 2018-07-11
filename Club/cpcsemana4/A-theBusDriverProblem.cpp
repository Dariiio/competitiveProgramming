#include<bits/stdc++.h>
using namespace std;

int n,d,r;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n>>d>>r){
		if(n==0&&d==0&&r==0)break;
		int mo[n], ev[n];
		for(int i=0;i<n;i++)cin>>mo[i];
		for(int i=0;i<n;i++)cin>>ev[i];
		
		sort(mo,mo+n);
		sort(ev,ev+n);
		reverse(ev,ev+n);
		
		int paid=0;
		int exe=0;
		for(int i=0;i<n;i++){
			if(mo[i]+ev[i]>d)
				exe+=(mo[i]+ev[i])-d;
		}
		paid=exe*r;
		cout<<paid<<"\n";
	}
	
	
	return 0;
}
