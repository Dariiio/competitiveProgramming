#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double lf;
typedef pair<int,int> pii;
 
const int oo = 1e9 + 100;
const int MAXN = 213*213;
const int MOD = 1e9 + 7;
const lf EPS = 1e-9;
 
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
 
int dist[MAXN];
 
map<pii, int> id;
vector<int> graph[MAXN];
 
int add_node( pii cur ) {
  if( !id.count(cur) ) {
    id[cur] = id.size()-1;
    graph[id.size()-1].clear();
  }
  return id[cur];
}
 
int main( ) {
 
  // ios::sync_with_stdio(0);
  // cin.tie(0);
 
  #ifdef LOCAL
    freopen( "input.txt", "r", stdin );
    // freopen( "output.txt", "w", stdout );
  #else
    #define endl '\n'
  #endif
 
  int n_test; scanf( "%d", &n_test );
 
  for( int tc = 1; n_test--; ++tc ) {
    id.clear();
    memset( dist, -1, sizeof(dist) );
    int n; scanf( "%d", &n );
    int x = 0, y = 0, lst = add_node({x,y});
    queue<int> q; q.push(lst); dist[lst] = 0;
    for( int i = 1; i <= n; ++i ) {
      char dir; scanf( " %c", &dir );
      if( dir == 'N' ) y++;
      if( dir == 'S' ) y--;
      if( dir == 'E' ) x++;
      if( dir == 'W' ) x--;
      int cur = add_node({x,y});
      graph[lst].push_back(cur);
      graph[cur].push_back(lst);
      lst = cur;
    }
    while( !q.empty() ) {
      int u = q.front(); q.pop();
      if( u == lst ) break;
      for( auto& v : graph[u] ) {
        if( dist[v] == -1 ) {
          dist[v] = dist[u]+1;
          q.push(v);
        }
      }
    }
    printf( "%d\n", dist[lst] );
  }
 
  return 0;
}