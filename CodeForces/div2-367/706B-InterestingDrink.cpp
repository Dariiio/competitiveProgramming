//706B-InteresitingDrink
#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int n,v[100100],q;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>n;
	forn(i,n) cin>>v[i];
	sort(v,v+n);
	cin>>q;
	
	while(q--){
		int m;cin>>m;
		cout<<(upper_bound(v,v+n,m)-v)<<"\n";
	}
	return 0;
}
