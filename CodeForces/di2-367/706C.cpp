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

string rev(string s){
	reverse(all(s));
	return s;
}

const long long oo= 1e16;
int n,c[100100];
vector<string> s(100100);
long long dp[100100][2];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("706C.txt", "r", stdin);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>c[i];
	for(int i=1;i<=n;i++)
		cin>>s[i];
	dp[0][1]=dp[0][0]=0;
	for(int i=1;i<=n;i++){
		dp[i][1]=dp[i][0]=oo;
		if(s[i]>=s[i-1])
			dp[i][0]=dp[i-1][0];
		if(s[i]>=rev(s[i-1]))
			dp[i][0]=min(dp[i][0],dp[i-1][1]);
		if(rev(s[i])>=s[i-1])
			dp[i][1]=c[i]+dp[i-1][0];
		if(rev(s[i])>=rev(s[i-1]))
			dp[i][1]=min(dp[i][1],c[i]+dp[i-1][1]);
	}
	ll ans = min(dp[n][1],dp[n][0]);
	if(ans>=oo)
		cout<<-1<<"\n";
	else
		cout<<ans<<"\n";
	
	return 0;
}
