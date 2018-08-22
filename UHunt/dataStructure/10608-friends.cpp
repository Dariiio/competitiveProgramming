#include<bits/stdc++.h>
using namespace std;

class UnionFind{
private: vector<int> p,rank,setSizes;
		int numSets;
public:
	UnionFind(int N){
		numSets=N;
		rank.assign(N,0);
		p.assign(N,0);
		setSizes.assign(N,1);
		for(int i=0;i<N;i++) p[i]=i;
	}
	int findSet(int i){
		return (p[i]==i)?i:(p[i]=findSet(p[i]));
	}
	bool isSameSet(int i,int j){
		return findSet(i)==findSet(j);
	}
	void unionSet(int i,int j){
		if(!isSameSet(i,j)){
			int x=findSet(i),y=findSet(j);
			if(rank[x]>rank[y]){
				setSizes[findSet(x)]+=setSizes[findSet(y)];
				p[y]=x;
			} 
			else{
				setSizes[findSet(y)]+=setSizes[findSet(x)];
				p[x]=y;
				if(rank[x]==rank[y]) rank[y]++;
			}
			numSets--;
		}
	}
	int numDisjointSet(){
		return numSets;
	}
	int setSize(int i){
		return setSizes[findSet(i)];
	}
};


int n,m,a,b,t;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n>>m;
		UnionFind uf(n);
		int maxi=1;
		for(int i=0;i<m;i++){
			cin>>a>>b;
			a--;b--;
			uf.unionSet(a,b);
			if(uf.setSize(a)>maxi)
				maxi=uf.setSize(a);
		}
		cout<<maxi<<"\n";
	}
	return 0;
}