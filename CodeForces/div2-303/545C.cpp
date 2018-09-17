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
ll x[100100],h[100100];
vector<ii> v;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("Problem-B.txt", "r", stdin);
	cin>>n;
	forn(i,n) cin>>x[i]>>h[i];
	
	v.pb({x[0]-h[0],x[0]});
	//if(x[0]+h[0]<x[1]) v.pb({x[0],x[0]+h[0]});
	if(n>1){
		for(int i=1;i<n-1;i++){
			int p=0;
			if(x[i]+h[i]<x[i+1]){
				//v.pb({x[i],x[i]+h[i]});
				p++;
			}
			if(x[i]-h[i]>x[i-1]){
				//v.pb({x[i]-h[i],x[i]});
				p++;
			}
			if(p==2){
				v.pb({x[i]-h[i],x[i]});
			}else if(p==1) 
			{
				v.pb({x[i],x[i]+h[i]});
			}
		}
		if(x[n-1]-h[n-1]>x[n-2]) v.pb({x[n-1]-h[n-1],x[n-1]});
		else v.pb({x[n-1],x[n-1]+h[n-1]});
	}
	cout<<v.size();
	cout<<"\n\n------\n";
	for(auto &a:v)
		cout<<"\n"<<a.fst<<" "<<a.snd;
	
	return 0;
}
