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

int n,k,dp[1000000];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	cin>>n>>k;
	int k2=k;
	//dp[0]=1e9;
	queue<int> q;int a,i=0;
	while(k--){
		cin>>a;
		q.push(a);
		//cout<<a<<" ";
		dp[i]+=a;
	}
	//cout<<dp[i];
	forn(j,n-k2){
		cin>>a;
		//cout<<a<<" ";
		q.push(a);
		i++;
		dp[i]=dp[i-1]+a-q.front();
		q.pop();
	}
	//forn(j,i+1) cout<<dp[j]<<" ";
	//cout<<"\n"<<i+1<<"\n";
	int pos=min_element(dp+1,dp+i+1)-dp;
	cout<<pos+1<<"\n";
	
	return 0;
}
