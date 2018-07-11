#include<bits/stdc++.h>
using namespace std;

int s[21];

long long f(int n){
	long long table[30002];
	memset(table,0,sizeof(table));
	table[0]=1;
	for(unsigned i=0;i<21;i++)
		for(unsigned j=s[i];j<=n;j++)
			table[j]+=table[j-s[i]];
	return table[n];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	for(int i=1;i<=21;i++){
		s[i-1]=i*i*i;
	}
	//for(int i=0;i<21;i++){
	//	cout<<s[i]<<"\n";
	//}
	int n;
	while(cin>>n){
		cout<<f(n)<<"\n";
	}

	return 0;
}