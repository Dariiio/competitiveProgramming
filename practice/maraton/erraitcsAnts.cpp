#include <bits/stdc++.h>
//Erratics ants
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
#define INF 1e9

map<pair<int, int> , int> mp;
pair<int,int> vp[110];
int n,S,x,y,mov,nodos;
char c;
vi g[110];
int dr[]={1,-1,0,0};
int dc[]={0,0,1,-1};

int bfs(int s){
	vi dist(nodos+5,INF);dist[s]=0;
	vi vst(nodos+5,-1);vst[s]=1;
	queue<int>q;q.push(s);
	while(!q.empty()){
		int u=q.front();q.pop();
		for(auto v: g[u]){
			if(vst[v]==-1){
				vst[v]=1;
				dist[v]=dist[u]+1;
				q.push(v);
			}
		}
	}
	return dist[mp[vp[S]]];
}

int main() {
	//freopen("entrada.txt","r",stdin);
	cin>>n;
	while(n--){		
		cin>>S;
		nodos=0;
		x=y=0;
		vp[0]={x,y};
		mp[vp[0]]=0;
		for(int i=1;i<=S;i++){
			cin>>c;
			if(c=='N')mov=0;
			else if(c=='S')mov=1;
			else if(c=='E')mov=2;
			else if(c=='W')mov=3;
			x+=dc[mov];y+=dr[mov];
			vp[i]={x,y};	
			//cout << x << " " << y << endl;
			if(mp.find({x,y})==mp.end()){				
				nodos++;
				mp[{x,y}]=nodos;				
			}
			ii u=vp[i];
			ii v=vp[i-1];
			g[mp[u]].push_back(mp[v]);
			g[mp[v]].push_back(mp[u]);
		}
		//cout << nodos << "--------------- " << endl;
		//cout << vp[S].first << " " << vp[S].second  << " "  << mp[vp[S]]<< endl;
		cout << bfs(0) <<"\n";
		forn(i,S+1)g[i].clear();
		mp.clear();
	}
	return 0;
}


      
