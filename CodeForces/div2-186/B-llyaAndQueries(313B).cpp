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

string s;
int n,l,r,v[100100],dp[100100];


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>s>>n;
	//forn(i,s.size())v[i]=0;
	v[1]=0;
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1]){
			v[i+1]=v[i]+1;
		}else{
			v[i+1]=v[i];
		}
	}
	//forn(i,s.size())cout<<v[i]<<" ";
	//cout<<"\n";
	while(n--){
		cin>>l>>r;
		cout<<v[r]-v[l]<<"\n";
	}
	return 0;
}