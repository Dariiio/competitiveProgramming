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

struct RMQ{
	#define LVL 10
	int vec[LVL][1<<(LVL+1)];
	int &operator[](int p){return vec[0][p];}
	int get(int i,int j){
		int p=31-__builtin_clz(j-i);
		return min(vec[p][i],vec[p][j-(1<<p)]);
	}
	void build(int n){
		int mp=31-__builtin_clz(n);
		forn(p,mp) forn(x,n-(1<<p))
			vec[p+1][x]=min(vec[p][x],vec[p][x+(1<<p)]);
	}
};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n,q;
	cin>>n;
	RMQ rm;
	forn(i,n){
		//int aux;cin>>aux;
		//rm[i]=aux;
		cin>>rm[i];
	}
	cin>>q;
	rm.build(n);
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<rm.get(l,r)<<"\n";
	}
	return 0;
}
