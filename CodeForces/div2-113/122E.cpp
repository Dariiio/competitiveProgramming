//https://www.spoj.com/problems/MIXTURES/
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

int n;
const ll MOD = 1e9+7;

int main(){
	cin>>n;
	int zD = 1;
	int zABC = 0;
	for (int i = 1; i <= n; i++) {
	  int nzD = zABC * 3LL % MOD;
	  int nzABC = (zABC * 2LL + zD) % MOD;
	  zD = nzD;
	  zABC = nzABC;
	}
	cout << zD;
	return 0;
}
