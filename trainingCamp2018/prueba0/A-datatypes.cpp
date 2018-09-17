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

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("Problem-B.txt", "r", stdin);
	int N;
    cin >> N;
    vector<int> num;
    for(int i=0; i<N; i++){
	int a; cin >> a; num.push_back(a);
    }
    sort(num.begin(),num.end());
    bool ans=false;
    for(int i=0; i<N-1; i++){
	if(num[i]*2>num[i+1] and num[i]!=num[i+1]){
	    ans=true;
	    break;
	}
    }
    if(ans){
	cout << "YES\n";
    }else{
	cout << "NO\n";
    }

	return 0;
}
