#include<bits/stdc++.h>
using namespace std;

vector<int> graph[105];
vector<bool> visit;
int v[10000];

void dfs(int node){
        visit[node] = true;
		cout<<node<<" ";
        for(int i=0;i<graph[node].size();i++){
            int current = graph[node][i];
            if(!visit[current]){
                dfs(current);
            }
        }
}



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	while(cin>>n){
		if(n==0)break;
		//visit.resize(n,false);
		int a;
		while(cin>>a){
			if(a==0)break;
			int b;
			while(cin>>b){
				if(b==0)break;
				a--;b--;
				graph[a].push_back(b);
			}
		}
		int k,p;
		cin>>k;
		for(int i=0;i<k;i++){
			visit.resize(n,false);
			cin>>p;
			dfs(p-1);cout<<"\n";
		}
		
		

	

	}
	
	/*
	for(int j=1;j<=3;j++){
		cout<<j<<": ";
		for(int i=0;i<graph[j].size();i++){
			cout<<graph[j][i]<<" ";
		}
		cout<<"\n";
	}*/



	return 0;
}