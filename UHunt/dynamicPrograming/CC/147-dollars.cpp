#include<bits/stdc++.h>
using namespace std;

int s[]={5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};

long long f(int n){
	long long table[30002];
	memset(table,0,sizeof(table));
	table[0]=1;
	for(unsigned i=0;i<11;i++)
		for(unsigned j=s[i];j<=n;j++)
			table[j]+=table[j-s[i]];
	return table[n];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	float n;
	while(cin>>n){
		if(n==0)
			break;
		long long n2;
		n2=(unsigned)((n + 0.001) * 100);
		printf("%6.2f%17lld\n",n ,f(n2));
	}	
	return 0;
}