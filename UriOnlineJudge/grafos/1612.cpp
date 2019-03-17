#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<int> visit;
bool cicle;

void dfs(int n){
	visit[n]=1;
	if(cicle) return;
	for(int i=0;i<(int)v[n].size();i++){
		if(visit[v[n][i]]){
			cicle = true;
			return;
		}else if (visit[v[n][i]]==0)
			dfs(v[n][i]);
	}
	visit[n]=2;
}

int main(){
	int t,n,m,u,w;
	cin>>t;
	while(t--){
		cin>>n>>m;
		v.assign(n,vector<int>());
		visit.assign(n,0);
		for(int i=0;i<m;i++){
			cin>>u>>w;
			v[u-1].push_back(w-1);
		}
		cicle = false;
		for(int i=0;i<n;i++){
			if(!visit[i])
				dfs(i);
			if(cicle) break;
		}
		if(cicle) cout<<"SIM\n";
		else cout<<"NAO\n";
		visit.clear();
	}
	return 0;
}
