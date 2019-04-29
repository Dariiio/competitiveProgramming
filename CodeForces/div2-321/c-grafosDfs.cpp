#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/580/C

//ACCEPTED
//ESTA PIOLA PARA GRAFOS COMO EJERCICIO INTORDUCTORIO
using namespace std;

int n,m,a[100100],ans = 0;
vector<int> g[100100];


void dfs(int v,int ant,int k){
	if(k>m) return;
	int ok = 1;
	for(int u:g[v]){
		if(u!=ant){
			//en los pasos intermedios resetea ok
			ok = 0;
			//si no hay gatos en a[u] se resetea, sino mantiene y suma 1
			dfs(u,v,k*a[u]+a[u]);
		}
	}
	//Solo cuenta las hojas 
	ans += ok;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];

	for(int i=0;i<n-1;i++){
		int a,b;cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	dfs(1,-1,a[1]);

	cout<<ans;

	return 0;
}
