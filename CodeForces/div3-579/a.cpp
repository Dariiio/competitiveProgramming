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
	int q,n,v[210];
	
	cin>>q;
	while(q--){
		cin>>n;
		forn(i,n) cin>>v[i];
		
		int start = min_element(v,v+n)-v;
		int d1 = 1, d2 = 1,i = start;
		
		i = (i+1)%n;
		while(i!= start){
			if(i+1<n && i+1 != start){
				if(v[i+1]-v[i] != 1) d1 = 0;
			}
			i = (i+1)%n;
		}
		
		i = min_element(v,v+n) - v;
		//cout<<i<<"----";
		i--;
		if(i<0) i = n-1;
		//cout<<i<<"i--";
		
		while(i!= start){
			if(i-1>=0 && i-1 != start){
				cout<<v[i-1] <<" - "<< v[i]<<"\n";
				if(v[i-1]-v[i] != 1) d2 = 0;
			}
			i--;
			if(i<0) i = n-1;
		}
		
		cout<<d1<<" "<<d2;
		if(d1 || d2) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	
    
    return 0;
}
