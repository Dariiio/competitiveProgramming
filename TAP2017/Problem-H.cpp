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

int main(){
	int n,v[100100];
	cin>>n;
	forn(i,n) cin>>v[i];
	
	int cc=0;
	bool crec=true;
	forn(i,n-1){
		if(v[i]<v[i+1]){
			crec=true;
		}
		if(v[i]>v[i+1]){
			if(crec){
				cc++;
				crec=false;
			}
		}
		cout<<"--"<<crec<<"--"<<cc<<endl;
	}
	cout<<cc<<"\n";
	
	return 0;
}
