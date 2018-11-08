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

int n;
bool isDiv(string s){
	map<char,int> mp;
	for(auto a:s){
		mp[a]+=1;
		if(mp[a]>(int)s.size()/2)return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	string s;
	bool div=false;
	cin>>n>>s;
	for(int i=0;i<(int)s.size();i++){
		for(int j=i;j<(int)s.size();j++){
			if(isDiv(s.substr(i,j))&& j!=i){
				div=true;
				cout<<"YES\n";
				cout<<s.substr(i,j);
				return 0;
			}
		}
	}
	if(!div) cout<<"NO\n";
	return 0;
}
