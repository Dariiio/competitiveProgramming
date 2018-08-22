#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> g[110];
vector<int> ts;
vector<bool> visit;
int tss[110],id;

void dfs2(int u){
	visit[u]=true;
	//cout<<u<<" ";
	for(auto a:g[u]){
		if(!visit[a]){
			dfs2(a);
		}
	}
	//tss[id--]=u;
	ts.push_back(u);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n>>m){
		if(n==0&&m==0)break;
		//for(int i=0;i<n;i++) g[i].clear();
		visit.resize(n+1,false);
		ts.clear();
		//id=n-1;
		int u,v;
		for(int i=0;i<m;i++){
			cin>>u>>v;
			g[u].push_back(v);
		}
		for(int i=1;i<=n;i++){
			if(!visit[i])dfs2(i);
		}
		reverse(ts.begin(),ts.end());
		for(auto a:ts)cout<<a<<" ";
			cout<<"\n";
		
		//reverse(tss,tss+n);		
		//for(int i=0;i<n;i++)
		//	cout<<tss[i]<<" ";
		//cout<<"\n";
	}
	return 0;
}