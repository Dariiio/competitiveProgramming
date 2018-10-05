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
#define all(v) (v).begin(), (v).end()
/*
int n,vp[100000],vc[100000];
//int dp[100000][100000];
int f(int i){
		if(i<0) return 0;
		if(vp[i]<=vc[i]) return f(i-1);
		if(i==0 && vp[i]<=vc[i]) return 1;
		return 0;
}*/
const ll MOD=1e9+7;
int n,p[100100],v[100100];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("Problem-B.txt", "r", stdin);
	while(cin>>n){
		forn(i,n) cin>>p[i];
		sort(p,p+n);
		zero(v);
		forn(_,n){
			int c;cin>>c;
			int id=upper_bound(p,p+n,c)-p;
			if(id) v[id-1]++;
		}
		int av=0;
		ll p=1;
		dforn(i,n){
			av+=v[i];
			p=(p*av)%MOD;
			av--;
		}
		cout<<p<<"\n";
	}
	return 0;
}
