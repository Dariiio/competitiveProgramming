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
typedef float ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define mkp make_pair
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))

struct UnionFind{
	vector<ll> f;
	void init(ll n){
		f.clear(); f.insert(f.begin(),n,-1);
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
			f[x]=y;
		}
	}
};


struct pt{float x,y;};
float d(pt a,pt b){
	return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}
struct Ar{ll a,b,w;};
bool operator<(const Ar& a, const Ar &b){return a.w<b.w;};

int t,n;
pt v[110];
vector<Ar> E;
UnionFind uf;

ll krustal(){
	ll cost=0;
	sort(E.begin(),E.end());
	uf.init(n);
	for(auto x:E){
		if(uf.comp(x.a)!=uf.comp(x.b)){
			uf.join(x.a,x.b);
			cost+=x.w;
		}
	}
	return cost;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);	
	cin>>t;
	while(t--){
		cin>>n;
		forn(i,n){
			pt aux;
			cin>>aux.x>>aux.y;
			v[i]=aux;
		}
		forn(i,n-1){
			Ar aux;
			aux.a=i;
			for(int j=i+1;j<n;j++){
				aux.b=j;
				aux.w=d(v[i],v[j]);
				E.pb(aux);
			}
		}
		if(t>1)printf("%.2f\n",krustal());
		else
		printf("\n%.2f\n",krustal());
		E.clear();
	}
    return 0;
}
