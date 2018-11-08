//ACCEPTED https://www.spoj.com/problems/RMQSQ/
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

const int MAXN=101000;

int n,q,a[MAXN], k=26;

int st[MAXN][26];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	int log[MAXN+1];
	log[1] = 0;
	for (int i = 2; i <= MAXN; i++) 
		log[i] = log[i/2] + 1;
	
	cin>>n;
	forn(i,n)cin>>a[i];
	
	forn(i,n) st[i][0]=a[i];
	
	for(int j=1;j<=k;j++)
		for(int i=0;i+(1<<j)<=n;i++)
			st[i][j]=min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
	
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		int j = log[r - l + 1];
		cout<<min(st[l][j], st[r - (1 << j) + 1][j])<<"\n";
	}
	return 0;
}
