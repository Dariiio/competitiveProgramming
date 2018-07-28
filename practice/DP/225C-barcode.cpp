#include<bits/stdc++.h>
using namespace std;

int n,m,x,y;
char v[1000][1000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n>>m>>x>>y;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>v[i][j];
	return 0;
}