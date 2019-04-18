#include <bits/stdc++.h>
using namespace std;

struct k{
	int s,d,ans;
};
bool f(k a,k b){
	if(a.ans > b.ans) return true;
	return false;
}

int main(){

	int n,t;cin>>n>>t;
	k bus[101];
	for(int i=1;i<=n;i++){
		cin>>bus[i].s>>bus[i].d;
	}

	int st = t;
	for(int i=1;i<=n;i++){
		bus[i].ans = 0;
	}

	int com=1e9; int indi;
	for(int i=1;i<=n;i++){
		st = t;
		while(st>0)
		{
			if(st==t) st-=bus[i].s;
			else st -= bus[i].d;
		}
		bus[i].ans = st;
		if(abs(st)<com) {
			com = abs(st);
			indi = i;
		}
	}
	cout<<indi<<"\n";
	
	return 0;
}
