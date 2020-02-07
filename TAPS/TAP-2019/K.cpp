// 

//
#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define muno(v) memset(v,-1,sizeof(v))
#define pb push_back
#define fs first
#define sn second
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))
#define all(s) s.begin(),s.end()
#define fin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)




int main(){
	fin;
	
	string s;
	vector<string> v;
	
	getline(cin,s);
	//cout<<s;
	
	int i = 0;string tag;
	while(i<(int)s.size()){
		if(s[i]=='@'){
			i++;
			while(s[i]!='@' && i<(int)s.size())
				tag += s[i],i++;
			v.pb(tag);
			tag.clear();
		}else i++;
	}
	for(auto a:v) cout<<a<<" ";


	return 0;
}
