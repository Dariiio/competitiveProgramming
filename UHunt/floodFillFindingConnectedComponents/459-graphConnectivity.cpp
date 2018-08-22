#include<bits/stdc++.h>
using namespace std;

vector<int> g[30];
vector<bool> vist;
int t,cont;
string s;

void dfs(int u){
	vist[u]=true;
	for(int a:g[u]){
		int current=a;
		if(!vist[current]){
			cont++;
			dfs(current);
		}
	}
}


int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	scanf("%d\n\n",&t);
	while(t--){
		getline(cin,s);
		int nodeL=s[0]-'A'+1;
		//cout<<nodeL;
		while(1){
			if(!getline(cin,s)||s.empty()) break;
			int u,v;
			u=s[0]-'A'+1;
			v=s[1]-'A'+1;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		int maxi=0;
		/*for(int i=1;i<=nodeL;i++){
			cont=0;
			dfs(i);
			cont>maxi?maxi=cont:0;
		}*/
		vist.resize(30,false);
		dfs(nodeL);
		cout<<cont<<"\n";
	}
	return 0;
}