#include<bits/stdc++.h>
using namespace std;

int t,m,n, s[3001];

int f(int m, int n){
	int table[n+1];
 
    memset(table, 0, sizeof(table));
 
    table[0] = 1;
 
    for(int i=0; i<m; i++)
        for(int j=s[i]; j<=n; j++)
            table[j] += table[j-s[i]];
 
    return table[n];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>m;
		for(int i=0;i<m;i++)cin>>s[i];
		cin>>n;
		cout<<f(m,n)<<"\n";
	}
	return 0;
}