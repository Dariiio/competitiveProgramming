#include<bits/stdc++.h>
using namespace std;

int m,n,t;

int f(int t){
	if(t==0)return 0;
	if(t<0)return -1;
	return max(f(t-m)+1,f(t-n)+1);
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>m>>n>>t){
		cout<<f(t)<<"\n";
	}
	return 0;
}