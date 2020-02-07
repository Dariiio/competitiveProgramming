#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fs first
#define sn second
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
const int INF = 1000000000;

vector<vector<ii>> adj(1001000);

void dijkstra(int s,vi &d,vi &p){
	int n = adj.size();
	d.assign(n+1,INF);
	p.assign(n+1,-1);
	vector<bool> u(n+1,false);
	
	d[s] = 0;
	forn(i,n+1){
		int v = -1;
		forn(j,n+1)
			if(!u[j] && (v==-1 || d[j]<d[v])) v = j;
			
		if(d[v] == INF) break;
		
		u[v] = true;
		
		for(auto ed:adj[v]){
			int to = ed.fs;
			int len = ed.sn;
			if(d[v] + len < d[to]){
				d[to] = d[v] + len;
				p[to] = v;
			}
		}
	}
}
vi restore_path(int s,int t,vi const &p){
	vi path;
	
	for(int v=t;v!=s;v=p[v])
		path.pb(v);
	path.pb(s);
	
	reverse(path.begin(),path.end());
	return path;
	
}




int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);
    
    int n,m;cin>>n>>m;
    vi d,p;
    
    while(m--){
		int a,b,w;
		cin>>a>>b>>w;
		adj[a].pb({b,w});
		adj[b].pb({a,w});
	}
    dijkstra(1,d,p);
    vi ans = restore_path(1,n,p);
    
    if(d[n]==INF) cout<<-1;
    else
		for(auto a:ans) cout<<a<<" ";
    
    return 0;
}
