#include<bits/stdc++.h>
using namespace std;
//216B
#define INF 1e9

int n,m,a,b;
vector<int>g[110];
int color[110];

bool bipar(int s){
	queue<int>q;
	q.push(s);
	color[s]=0;
	bool isB=true;
	while(!q.empty()&&isB){
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
	return isB;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	int ans=0;
	fill(color,color+n+1,INF);
	for(int i=1;i<=n;i++){
		if(color[i]==INF && !bipar(i))
			ans++;
	}

	if((n-ans)%2)cout<<++ans;
	else cout<<ans;
	return 0;
}

