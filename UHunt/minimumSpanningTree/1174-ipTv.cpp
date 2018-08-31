#include<bits/stdc++.h>
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
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define mkp make_pair
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))
typedef vector<int> vi;

class UnionFind{
private: vector<int> p,rank,setSizes;
		int numSets;
public:
	UnionFind(int N){
		numSets=N;
		rank.assign(N,0);
		p.assign(N,0);
		setSizes.assign(N,1);
		for(int i=0;i<N;i++) p[i]=i;
	}
	int findSet(int i){
		return (p[i]==i)?i:(p[i]=findSet(p[i]));
	}
	bool isSameSet(int i,int j){
		return findSet(i)==findSet(j);
	}
	void unionSet(int i,int j){
		if(!isSameSet(i,j)){
			int x=findSet(i),y=findSet(j);
			if(rank[x]>rank[y]) p[y]=x;
			else{
				p[x]=y;
				if(rank[x]==rank[y]) rank[y]++;
			}
			numSets--;
		}
	}
	int numDisjointSet(){
		return numSets;
	}
	int setSize(int i){
		return setSizes[findSet(i)];
	}
};


int t,m,n;
vector<pair<int,ii>> g;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		map<string,int> mp;int cont=1;
		cin>>m>>n;
		string u,v;int w;
		forn(i,n){
			cin>>u>>v>>w;
			if(mp[u]==0) mp[u]=cont++;
			if(mp[v]==0) mp[v]=cont++;
			g.push_back({w,{mp[u],mp[v]}});
		}
		sort(g.begin(),g.end());
		int mst_cost=0;
		UnionFind UF(m);
		for(int i=0;i<n;i++){
			pair<int,ii> front=g[i];
			if(!UF.isSameSet(front.snd.fst,front.snd.snd)){
				mst_cost+=front.fst;
				UF.unionSet(front.snd.fst,front.snd.snd);
			}
		}
		cout<<mst_cost<<"\n";
	}
	return 0;
}