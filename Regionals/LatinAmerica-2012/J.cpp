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

const int MAX = 10;
int parent[MAX];
bool visited[MAX];
vector<int> tree[MAX];

void getParents(int node, int par){
		for(auto a:tree[node]){
			if(a!=par){
				parent[a]=node;
				getParents(a,node);
			}
		}
}
int lca(int u,int v){
	int lc;
	while(1){
		visited[u]=true;
		if(u==ROOT){
			break;
		}
		u=parent[u];
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	return 0;
}
