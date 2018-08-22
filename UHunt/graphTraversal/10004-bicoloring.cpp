#include<bits/stdc++.h>
using namespace std;

#define INF 1e9
int n,m;
vector<int>g[210];

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n){
		if(n==0)break;
		cin>>m;
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			g[a].push_back(b);
			g[b].push_back(a);
		}


		queue<int>q;
		q.push(0);
		vector<int> color(n,INF);
		color[0]=0;
		bool isB=true;
		while(!q.empty() && isB){
			int u=q.front();
			q.pop();
			for(auto v: g[u]){
				if(color[v]==INF){
					color[v]=1-color[u];
					q.push(v);
				}else if(color[v]==color[u]){
					isB=false;
					break;
				}
			}
		}


		if(isB){
			cout<<"BICOLORABLE.\n";
		}
		else{
			cout<<"NOT BICOLORABLE.\n";
		}

	}
	return 0;
}