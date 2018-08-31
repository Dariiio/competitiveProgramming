#include<bits/stdc++.h>
using namespace std;

#define INF 1e9
int e,n,t;
vector<int> g[2505];
int d[2505];
int maxsize, firstD;

void bfs(int u){
	for(int i=0;i<e;i++)d[i]=INF;
	queue<int> q;
	q.push(u);d[u]=0;
	while(!q.empty()){
		u=q.front();q.pop();
		for(auto a:g[u]){
			if(d[a]==INF){
				d[a]=d[u]+1;
				q.push(a);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>e;
	for(int i=0;i<e;i++){
		cin>>n;
		while(n--){
			int a;cin>>a;
			g[i].push_back(a);
		}
	}
	cin>>t;
	while(t--){
		int b;cin>>b;
		if(g[b].size()>0){
			bfs(b);
			maxsize=0;firstD = -1;
			sort(d,d+e);
			int len=1;
			for(int i=1;i<=e;i++){
				if(d[i-1]==d[i])len++;
				else{
					if(d[i-1]!=INF && len>maxsize){
						maxsize=len;
						firstD=d[i-1];
					}
					len=1;
				}
			}
				if(firstD==0) firstD++;
				cout<<maxsize<<" "<<firstD<<"\n";
		}
		else cout<<"0"<<"\n";
	}
	return 0;
}