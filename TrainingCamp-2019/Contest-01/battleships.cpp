#include <bits/stdc++.h>

using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define mkp make_pair
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))

int n,k,a,m,cant;

set <ii> x;

int f(int l, int r)
{
	return (r-l+2)/(a+1);
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	
	cin>>n>>k>>a>>m;
	
	x.insert({n,1}); // al revez para lowebound
	cant = f(1,n);
	
		
	forn(i,m)
	{
		int nk1=0,nk2=0,xx;
		cin>>xx;
		
		auto it = x.lower_bound({xx,-1});
		int l = it->snd, r = it->fst;
		
		if(xx-1>=l) nk1 = f(l,xx-1);
		if(xx+1<=r) nk2 = f(xx+1,r);
		
		cant -= f(l,r);
		cant += nk1 + nk2;
		
		if(cant<k){
			cout<<i+1;
			return 0;
		}
		x.erase(it);
		if(xx-1>=l) x.insert({xx-1,l});
		if(xx+1<=r) x.insert({r,xx+1});
	}
	cout<<"-1\n";
	
	return 0;
}
