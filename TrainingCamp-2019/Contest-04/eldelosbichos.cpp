#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
#define fs first
#define sn second
#define pb push_back

int t,bug,m;


int main()
{
	
	cin>>t;
	forr(tc,1,t+1){
		
		cin>>bug>>m;
		int a,b;
		vi g[21000];
		vi side(bug+10,-1);
		bool bp = true;
		queue<int> q;
		
		forn(i,m){
			cin>>a>>b;
			g[a].pb(b);
			g[b].pb(a);
		}
		
		for(int i=1;i<=bug;i++){
			if(side[i]==-1){
				q.push(i);
				side[i] = 0;
				while(!q.empty()){
					int v = q.front();
					q.pop();
					for(auto u: g[v]){
						if(side[u] == -1){
							side[u] = side[v]^1;
							q.push(u);
						}else
							bp = (bp && (side[u] != side[v]));
					}
				}
			}
		}
		
		//cout<<"\n";
		//for(auto a: side) cout<<a<<" ";
		//cout<<"\n";No suspicious bugs found!
		
		cout<<"Scenario #"<<tc<<":\n";
		if(!bp){
			cout<<"Suspicious bugs found!\n";
		}else{
			cout<<"No suspicious bugs found!\n";
		}
		
		for(auto a:g) a.clear();
		side.clear();
		
	}
	
	//cout<<((1)^(1));

	return 0;
}
