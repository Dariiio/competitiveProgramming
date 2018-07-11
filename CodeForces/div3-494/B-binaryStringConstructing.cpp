#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int a,b,x;
	char l,r;
	cin>>a>>b>>x;
	if(a>b){
		l='0';
		r='1';
	}else{
		l='1';
		r='0';
		swap(a,b);
	}
	for(int i=0;i<x/2;i++){
		cout<<l<<r;
		a--;
		b--;
	}
	if(x%2==0){
		while(b--)
			cout<<r;
		while(a--)
			cout<<l;
	}else{
		while(a--)
			cout<<l;
		while(b--)
			cout<<r;
	}

	return 0;
}