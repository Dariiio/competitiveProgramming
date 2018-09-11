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
#define all(v) (v).begin(), (v).end()

int n,k,d,v[110];
ll dp[3][10000];

int g(int i){
	if(v[i]>=d) return 1;
	else return 0;
}

ll f(int j,int n){
	if(n<0)return 0;
	if(n==0 && j==1) return 1;
	ll sum=0;
	for(int i=1;i<=k;i++){
		if(v[i]>=d) j=1;
		sum+=f(j,n-v[i]);
	}
	return sum;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("706C.txt", "r", stdin);
	
	cin>>n>>k>>d;
	memset(dp,-1,sizeof(dp));
	for(int i=1;i<=k;i++)v[i]=i;
	cout<<f(0,n)%1000000007;
	
	return 0;
}
