#include <bits/stdc++.h>

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
#define fs first
#define sn second
#define pb push_back

int n,k;
vi g[1000000];

/*
void dfs(int v,int p){
	int leaf = 1;
	for(auto u:g[v])
		if(u!=p){
			leaf = 0;
			dfs(u,v);
		}
	if(leaf) cout<<v<<" ";
}*/ //cuenta todas las hojas desde las raiz

/*
void dfs(int v,int p,int kk){
	for(auto u:g[v]){
		if(u!=v && kk<k)
			dfs(u,v,kk+1),cout<<"u: "<<u<<" "<<kk+1<<"\n";
	}
	//cout<<"v: "<<v<<" dis desde root "<<kk<<"\n";
}*/ // Baja hasta k de profundidad


//int vv[100];

int dfs(int v,int p,int kk,int sts){
	int leaf = 1;
	static int lfs = sts;
	if(sts == 1) lfs = 0,sts=0;
	if(kk>k) return 0;
	for(auto u:g[v])
		if(u!=p) leaf=0,dfs(u,v,kk+1,sts);
	if(leaf) lfs++;
	
	return lfs;
}

int main()
{	
	
	//memset(vv,0,sizeof(vv));
	
	cin>>n>>k;
	for(int i=2;i<=n;i++){
		int ax;cin>>ax;
		g[i].pb(ax);
		g[ax].pb(i);
	}
	
	/*
	for(int i=2;i<=n-1;i++){
		cout<<i<<": ";
		for(auto a: g[i])
			cout<<a<<" ";
		cout<<"\n";
	}
	*/
	
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum += dfs(i,1,0,1);
	}
	cout<<sum;
	
	
	//cout<<dfs(1,1,0,0)<<"\n";
	//cout<<dfs(3,1,0,1)<<"\n";
	//cout<<dfs(4,1,0,1)<<"\n";
	//cout<<dfs(1,1,0,0)<<"\n";
	
	//forn(i,n+1) cout<<i<<":"<<vv[i]<<" ";
	//cout<<"\n";
	//cout<<count(vv,vv+n+1,1);
	
	

	return 0;
}
