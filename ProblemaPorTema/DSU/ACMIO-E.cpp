#include<bits/stdc++.h>
// https://codeforces.com/group/L1Sf9F4uBt/contest/200499/problem/E
// https://codeforces.com/blog/entry/15729
// https://cp-algorithms.com/data_structures/disjoint_set_union.html#toc-tgt-0

// https://codeforces.com/blog/entry/19989
using namespace std;
// UNION FIND CASI BASICO CON EJEMPLO ACCEPTED
int parent[100100],contain[100100],box[100100];

void make_set(int v) {parent[v] = v;contain[v]=v;}
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[a] = b;
}

int n,q;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin>>n>>q;

	for(int i=1;i<=n;i++)
		make_set(i);

	while(q--){
		int s,t,u,v;cin>>s>>t;
		u = contain[s],v = contain[t];
		contain[s] = 0;
		if(v != 0)
			union_sets(u,v);
		else
			contain[t] = u;
	}

	for(int i=1;i<=n;i++)
		box[contain[i]] = i;// ??
	
	for(int i=1;i<=n;i++)
		cout<<box[find_set(i)]<<" ";
	
	return 0;
}
/*
5 4
1 2
3 2
4 2
2 5

->
5 5 5 5 5


3 1
1 3

->
3 2 3
*/
