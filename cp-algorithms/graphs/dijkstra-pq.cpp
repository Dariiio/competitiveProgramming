#include <bits/stdc++.h>
//https://codeforces.com/problemset/problem/20/C

//ACCEPTED 
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fs first
#define sn second
typedef long long ll;
typedef pair<ll,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
const ll INF = LLONG_MAX;
 
#define MAXV 250001
vii g[MAXV];
vector<ll> dist(MAXV,INF); //vector de distancia
vi dad(MAXV,-1); //vector de padres
 
int n,m;
 
// O( |E| log|V| )
void dijkstra(int s){
	priority_queue<ii,vii,greater<ii>> q;
	q.push({0,s}); dist[s] = 0;
	while(!q.empty()){
		ii front = q.top(); q.pop(); // Esta es la parte greedy, la pq me da el de menos distancia creo
		if(front.fs > dist[front.sn]) continue;
		// Lo descarto por tener mayor dist que la que ya tiene
		// Recorro cada vecino
		for(auto v: g[front.sn]){
			if( dist[front.sn] + v.fs < dist[v.sn])
			{
				dist[v.sn] = dist[front.sn] + v.fs;
				dad[v.sn] = front.sn;
				q.push({ dist[v.sn],v.sn });
			}
		}
		
	}
	
}
 
 
int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>m;
	while(m--){
		int a,b,w;
		cin>>a>>b>>w;
		g[a].pb({w,b});
		g[b].pb({w,a});
	}
	
	dijkstra(1);
	//cout<<dist[n];
	//for(auto a: dad) cout<<a<<" ";
	//restore path
	if(dist[n]<INF){
		vi ans;
		for(int v=n;v!=1;v = dad[v]) ans.pb(v);
		ans.pb(1);
		for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
	}
	else cout<<-1;
	
	return 0;
}
