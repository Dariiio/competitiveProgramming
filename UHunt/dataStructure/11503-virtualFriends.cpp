#include<bits/stdc++.h>
//Este es el bueno
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
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define mkp make_pair
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))
typedef vector<int> vi;

struct UnionFind{
	vector<ll> f,setSizes;
	void init(ll n){
		f.clear(); f.insert(f.begin(),n,-1);
		setSizes.assign(n,1);
	}
	ll comp(ll x){
		return (f[x]==-1?x:f[x]=comp(f[x]));//O(1)
	}
	bool isSameSet(ll i,ll j){
		return comp(i)==comp(j);
	}
	void join(ll i,ll j){
		if(!isSameSet(i,j)){
			ll x=comp(i),y=comp(j);
			setSizes[comp(y)]+=setSizes[comp(x)];
			f[x]=y;
		}
	}
	ll getSize(ll i){
		return setSizes[comp(i)];
	}
};


ll t,n;
map<string,ll> mp;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	string u,v;
	char u0[25],v0[25];
	ll cont;
	cin>>t;
	while(t--){
		cin>>n;
		UnionFind uf;
		uf.init(n*2);
		mp.clear();
		cont=0;
		forn(i,n){
			cin>>u0>>v0;
			u=string(u0);
			v=string(v0);
			if(!mp.count(u))mp[u]=cont++;
			if(!mp.count(v))mp[v]=cont++;
			uf.join(mp[u],mp[v]);
			cout<<uf.getSize(mp[u])<<"\n";
		}
	}

	return 0;
}