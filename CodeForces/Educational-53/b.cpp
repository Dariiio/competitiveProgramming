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

vector<int> v;
deque<int> st;
set<int> asd;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//cout<<lcm(6,8);
	int n;cin>>n;
	forn(i,n){
		int aux;cin>>aux;
		st.push_back(aux);
	}
	forn(i,n){
		int aux;cin>>aux;
		v.push_back(aux);
	}
	forn(i,n){
		int cont=0;
		while(st.front()!=v[i] && asd.count(v[i])==0){
			asd.insert(st.front());
			st.pop_front();
			cont++;
		}
		if(i==0) cont++;
		cout<<cont<<" ";
	}
	
	return 0;
}
