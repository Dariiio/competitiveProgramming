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

/*
ll dp[1000][1000];

ll f(int x,int y){
    if(x<=0 || y<=0) return 0;
    if(dp[x][y]!=-1) return dp[x][y];
    return dp[x][y]=max(f(x+1,y-2)+1,f(x-2,y+1)+1);
}*/

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(NULL);
	//freopen("input.txt", "r", stdout);
    int a, b; scanf("%d %d\n", &a, &b);
    if(a <= 1 && b <= 1){puts("0");}
    else{printf("%d\n", a + b - 2 - ((a - b)%3 == 0));}
	return 0;
}
