//466C div2-266
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

const int MAXN=1000000;
int n,t[4*MAXN];

void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}
//will be called: v=1, tl=0, and tr=n−1.

int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n,a[1000000];
	ll s=0;
	cin>>n;
	forn(i,n){
		cin>>a[i];
		s+=a[i];
	}
	ll cnt[1001000];
	//build(a,1,0,n-1);
	if(s%3!=0) cout<<"0\n";
	else{
		s/=3;
		ll ss=0;
		for(int i=n-1;i>=0;--i){
			ss+=a[i];
			if(ss==s) cnt[i]=1;
		}
		for(int i=n-2;i>=0;i--){
			cnt[i]+=cnt[i+1];
		}
		ll ans=0;
		ss=0;
		for(int i=0;i+2<n;++i){
			ss+=a[i];
			if(ss==s) ans+=cnt[i+2];
		}
		cout<<ans<<"\n";
	}
	
	
	return 0;
}
