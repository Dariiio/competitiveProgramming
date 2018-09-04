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

int N,v[110];

long long f(int i,char ant){
	if(i>=N) return 0;
	if(v[i]==0) return f(i+1,0)+1;
	if(v[i]==1){
		if(ant=='0') return min(f(i+1,'C')+1,f(i+1,'C'));
		if(ant=='C') return f(i+1,'C');
		if(ant=='G') return min(f(i+1,'C')+1,f(i+1,'C'));
	}
	if(v[i]==2){
		if(ant=='0') return min(f(i+1,'G')+1,f(i+1,'G'));
		if(ant=='G') return f(i+1,'G');
		if(ant=='C') return min(f(i+1,'G')+1,f(i+1,'G')); 
	}
	if(v[i]==3){
		if(ant=='G') return min(f(i+1,'C')+1,f(i+1,'C'));
		if(ant=='C') return min(f(i+1,'G')+1,f(i+1,'G'));
		//if(ant=='0') 
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>N;
	forn(i,N) cin>>v[i];
	cout<<f(0,'0')<<"\n";
	return 0;
}