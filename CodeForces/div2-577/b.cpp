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
	int n,a[1000100],ant = -1;
	cin>>n;
	
	forn(i,n) cin>>a[i];
	sort(a,a+n,greater<int>());
	
	
	forn(i,n){
		
		if(ant == -1)
			ant = a[i];
		else{
			ant = abs(ant-a[i]);
		}
	}
	
	if(ant == 0) cout<<"YES\n";
	else cout<<"NO\n";
    
    return 0;
}
