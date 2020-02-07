#include <bits/stdc++.h>
//https://codeforces.com/problemset/problem/95/C

//
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
 
#define MAXV 1010
vii g[MAXV];
ll dist [MAXV][MAXV];
 
int n,m;
vii tx;
ll g2[MAXV][MAXV];

void dijkstra(int s,ll d[MAXV]){
	priority_queue<ii,vii,greater<ii>> q;
	q.push({0,s}); 
	forn(i,n+1) d[i] = INF;
	d[s] = 0;
	while(!q.empty()){
		ii front = q.top(); q.pop();
		if(front.fs > d[front.sn]) continue;
		for(auto v: g[front.sn]){
			if( d[front.sn] + v.fs < d[v.sn])
			{
				d[v.sn] = d[front.sn] + v.fs;
				q.push({ d[v.sn],v.sn });
			}
		}
		
	}
}
 
 
int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);
	int x,y;
	cin>>n>>m>>x>>y;
	while(m--){
		int a,b,w;
		cin>>a>>b>>w;
		g[a].pb({w,b});
		g[b].pb({w,a});
	}
	forn(i,n){
		int t,c;cin>>t>>c;
		tx.pb({t,c});
	}
	
	//calcula la dist min de todos los nodos en O(N |E| log|V| ) creo
	for(int i = 1;i<=n;i++) dijkstra(i,dist[i]);
	//cout<<dist[1][3];
	
	//Armo mi grafo de costos ... basado en el de distancias y el input de los taxistas
	zero(g2);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if( tx[j-1].fs >= dist[i][j]) //cout<<tx[i-1].fs<<"."<<tx[i-1	].sn<<" ";
				g2[i][j] = tx[i-1].sn;
			else
				g2[i][j] = INF;
	
	for(int i = 0;i<n;i++) cout<<tx[i].fs<<"."<<tx[i].sn<<" ";
	
	cout<<"\n";
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) {
			if(g2[i][j] == INF) cout<<"- ";
			else cout<<g2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
/*
4 4
1 2 3
1 4 1
2 4 1
2 3 5
*/
gbb
