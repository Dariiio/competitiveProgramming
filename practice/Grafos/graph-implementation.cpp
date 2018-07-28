#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<vi> graph(1000);
vector<bool> visit;

void dfs(int node){
	visit[node]=true;
	cout<<"estoy viendo el nodo: "<<node<<"\n";
	for(int i=0;i<graph[node].size();i++){
		int current=graph[node][i];
		if(!visit[current]) dfs(current);
	}
}
vector<bool> encolado;

void bfs(int node){
	queue<int> q;
	q.push(node);
	encolado[node]=true;
	while(q.size()){
		int current=q.front();
		q.pop();
		cout<<"Nodo: "<<current<<"\n";
		for(int i=0;i<graph[current].size();i++){
			int t=graph[current][i];
			if(!encolado[t]){
				q.push(t);
				encolado[t]=true;			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int u,v;
	while(cin>>u>>v){
		if(u==-1 &&v==-1)break;
		if(u==0 && v==0) graph.clear();
		graph[u].push_back(v);

	}
	//cout<<graph[5].size();
	//dfs(5);
	return 0;
}