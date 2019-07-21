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

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	int a[205],n,k,mn = 200, mx = -1,c;
	cin>>n>>k;
	
	forn(i,n){
		cin>>a[i];
		mn = min(mn,a[i]);
		mx = max(mx,a[i]);
	}
	if(mx - mn > k) cout<<"NO\n";
	else{
		cout<<"YES\n";
		forn(i,n){
			c = 1;
			forn(p,mn) cout<<1<<" ";
			forr(p,mn,a[i]) cout<<c%k +1<<" ",c++;
			cout<<"\n";
		}
		
	}
	
	
	return 0;
}
