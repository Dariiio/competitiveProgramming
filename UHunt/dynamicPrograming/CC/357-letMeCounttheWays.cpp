#include<bits/stdc++.h>
using namespace std;

int s[]={1,5,10,25,50};
//m=5
long long int f(int n){
	long long int table[n+1];
	memset(table,0,sizeof(table));
	table[0]=1;
	for(int i=0;i<5;i++)
		for(int j=s[i];j<=n;j++)
			table[j]+=table[j-s[i]];
	return table[n];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	while(cin>>n){
		long long int m=f(n);
		if(m>1)
			printf("There are %lld ways to produce %d cents change.\n",m,n);
		else
			printf("There is only 1 way to produce %d cents change.\n", n);	
	}	
	return 0;
}