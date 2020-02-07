#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fs first
#define sn second
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
const int INF = 1000000000;


int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);
    int m,n,a[1010];
	string s[1010];
    cin>>m>>n;
    forn(i,m){
		cin>>s[i];
	}
	forn(i,n) cin>>a[i];
	
	int ans = 0;
	forn(i,n){
		int mx[5];
		zero(mx);
		forn(j,m){
			//cout<<s[i][j]<<" ";
			if(s[j][i] == 'A') mx[0] += a[i];
			if(s[j][i] == 'B') mx[1] += a[i];
			if(s[j][i] == 'C') mx[2] += a[i];
			if(s[j][i] == 'D') mx[3] += a[i];
			if(s[j][i] == 'E') mx[4] += a[i];
		}
		ans += *max_element(mx,mx+5);
	}
	cout<<ans<<"\n";
    
    return 0;
}
