#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
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

struct UnionFind{
	vector<int> f;
	void init(int n){
		f.clear(); f.insert(f.begin(),n,-1);
	}
	int comp(int x){
		return (f[x]==-1?x:f[x]=comp(f[x]));//O(1)
	}
	bool join(int i,int j){
		bool con=comp(i)==comp(j);
		if(!con)f[comp(i)]=comp(j);
		return con;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int t,n,x,y,ans;
	string s;	

	scanf("%d\n",&t);
	for(int i=1;i<=t;i++){
		getline(cin,s);
		n=s[0]-'A'+1;

		ans=n;
		//cout<<n;
		UnionFind uf;
		uf.init(n);

		while(1){
			if(!getline(cin,s)||s.empty())break;
			
			x=s[0]-'A';y=s[1]-'A';
			
			if(uf.comp(x)!=uf.comp(y)){
				uf.join(x,y);
				ans--;
			}
		}
		if(i!=1)cout<<"\n";
		cout<<ans<<"\n";
	}

	return 0;
}