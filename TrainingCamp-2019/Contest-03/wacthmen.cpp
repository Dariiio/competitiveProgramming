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
typedef pair<float,float> ii;
typedef vector<int> vi;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define mkp make_pair
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))


float f1(ii x,ii y){
	return abs(x.fst-y.fst) + abs(x.snd-y.snd);
}

float f2(ii x,ii y){
	return sqrt( pow(x.fst-y.fst,2) + pow(x.snd-y.snd,2) );
}

int main()
{
	int n;
	cin>>n;
	
	vector<ii> v;
	
	for(int i=0;i<n;i++){
		ii w;
		cin>>w.fst>>w.snd;
		v.pb(w);
	}
	
	cout<<f1(v[0],v[1])<<" "<<f2(v[0],v[1]);
	
	return 0;
}
