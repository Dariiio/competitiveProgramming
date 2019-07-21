#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/115/A


using namespace std;

vector<int> g[2010];
int visited[2010];

int main()
{
	int n,ax;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ax;
		if(ax!=-1) g[ax].push_back(i);
	}

	
	for(int i=1;i<=n;i++){
		cout<<i<<": ";
		for(auto a:g[i]){
			cout<<a<<" ";
		}
		cout<<endl;
	}


	return 0;
}
