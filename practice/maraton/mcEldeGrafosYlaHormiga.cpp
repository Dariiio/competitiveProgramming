//touch {a..m}.in; tee {a..m}.cpp < template.cpp
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
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define mkp make_pair
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))
 
const int MAXN=100100;
int n;
 
map<ii,int> mp;
int node_id(ii node) {
    if (mp.count(node)) return mp[node];
    return mp[node]=sz(mp);
}
map<char,int> dir = { {'N',0}, {'E',1}, {'S',2}, {'W',3} };
int di[] = {-1,0,1,0};
int dj[] = {0,1,0,-1};
vector<int> G[100];
const int INF = 1e3;
int dist[100];
int bfs(int s, int t) {
    queue<int> q;
    memset(dist,-1,sizeof(dist));
    q.push(s);
    dist[s]=0;
    while(!q.empty()) {
        int v = q.front(); q.pop();
        if (v == t) break;
        forall(it,G[v]) if (dist[*it]==-1) {
            dist[*it] = dist[v]+1;
            q.push(*it);
        }
    }
    return dist[t];
}
 
int main() {
    #ifdef LOCAL_PROJECT
        freopen("in", "r", stdin);
        //~ freopen("output.out", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    int tc;
    while(cin >> tc){
        forn(_,tc) {
            zero(G);
            mp.clear();
            cin >> n;
            ii pos(0,0);
            forn(_,n) {
                string sd; cin >> sd;
                int d = dir[sd[0]];
                ii sig(di[d]+pos.fst,dj[d]+pos.snd);
                int a = node_id(pos);
                int b = node_id(sig);
                G[a].pb(b);
                G[b].pb(a);
                pos = sig;
            }
            cout << bfs(node_id(ii(0,0)), node_id(pos)) << endl;
        }
       
    }
    return 0;
}
