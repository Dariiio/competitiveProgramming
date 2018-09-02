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

long long n,v[10001000],vc[10001000];
long long dp[10001000];

long long f(int i){
	if(i==1){
		return vc[i];
	}
	if(i==0){
		return 0;
	}
	if(dp[i]!=-1)
		return dp[i];
	return dp[i]=max(f(i-2)+vc[i]*i,f(i-1));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n;
	forn(i,n) vc[i]=0;
	memset(dp,-1,sizeof(dp));
	forn(i,n){
		cin>>v[i];
		vc[v[i]]++;
	}
	long long maxi=*max_element(v,v+n);
	cout<<f(n)<<"\n";
	return 0;
}