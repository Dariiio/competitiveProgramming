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

int n,v[110];
const int INF = 10000;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n;
	forn(i,n) cin>>v[i];
	int dp[110][110];
	for(int i=1;i<=n;i++){
		dp[i][0]=1+min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]));
		dp[i][1]=(v[i-1]==0||v[i-1]==1) ? INF : min(dp[i-1][0],dp[i-1][2]);
		dp[i][2]=(v[i-1]==0||v[i-1]==2) ? INF : min(dp[i-1][0],dp[i-1][1]);
	}

	cout<<min(dp[n][0],min(dp[n][1],dp[n][2]))<<"\n";
	return 0;
}