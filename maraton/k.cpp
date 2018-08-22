#include<bits/stdc++.h>
using namespace std;

long long t,n;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		long long aux =pow(66,n);
		cout<<aux%100<<"\n";
	}
	return 0;
}