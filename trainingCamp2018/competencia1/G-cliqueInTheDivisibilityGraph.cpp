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

const int MAXN=1e6+5;
const int INF=1e8+5;
int n;

bool esta[MAXN];
int dp[MAXN];

int f(int x){
	if(dp[x]!=-1)
		return dp[x];
	int rta=1;
	int i=2;
	while(x*i<MAXN){
		if(esta[x*i])
			rta=max(rta,f(x*i)+1);
		i++;
	}
	return dp[x]=rta;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	forn(i,MAXN)
		dp[i]=-1;
	cin>>n;
	vi A(n);
	forn(i,n){
		int x;cin>>x;
		A[i]=x;
		esta[x]=true;
	}
	int rta=0;
	forn(i,n){
		rta=max(rta,f(A[i]));
	}
	cout<<rta<<"\n";
	return 0;
}