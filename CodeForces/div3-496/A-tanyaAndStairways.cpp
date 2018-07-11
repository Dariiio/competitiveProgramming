#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n,v[10000];
	cin>>n;
	int t=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]==1)
			t++;
	}
	cout<<t<<"\n";
	//sort(v,v+n);
	for(int i=0;i<n-1;i++){
		if(v[i+1]==1)
			cout<<v[i]<<" ";
	}
	cout<<v[n-1];
	return 0;
}