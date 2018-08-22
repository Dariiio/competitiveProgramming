#include<bits/stdc++.h>
using namespace std;

int n,k;

int f(int a,int b){
	if(a+b==n) return 1;
	if(a>n || b>n) return 0;
	if((a+b)!=n) return (f(a+1,b)+f(a,b+1));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n>>k){
		if(n==0&&k==0)break;
		cout<<f(0,0)<<"\n";
	}

	return 0;
}