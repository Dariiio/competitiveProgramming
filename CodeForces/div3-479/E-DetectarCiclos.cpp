#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cassert>
#include <queue>
using namespace std;
#define forr(i, a, b) for(int i = (a); i < (int) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
#define dforn(i, n) for(int i = n - 1; i >= 0; i--)
 
const int MAXN = 1024;
const ll INF = (ll) 1e18 + 7;
 
struct node {
    ll id, w;
};
bool operator < (node a, node b){
    return a.w > b.w;
}
 
struct edge {
    ll to, w;
};
 
ll n, m, s, t, md[MAXN], c[MAXN], dist[MAXN][MAXN];
vector<edge> G[MAXN];
bool ok;
 
void dijkstra(ll src, ll d[MAXN]){
    forn(i, n) d[i] = INF;
    d[src] = 0;
}
 
ll cost[MAXN];
 
int main() {
    //~ freopen("input.in", "r", stdin);
        forn(i, n){
            dijkstra(i, dist[i]);
        }
    
    return 0;
}
