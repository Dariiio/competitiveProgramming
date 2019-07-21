#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/489/B

// ACCEPTED
using namespace std;

int main()
{
	int n,m,a[110],b[110],ans = 0;
	
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	
	cin>>m;
	for(int i=0;i<m;i++) cin>>b[i];
	
	sort(a,a+n);
	sort(b,b+m);
	
	int j = 0;
	for(int i=0;i<n;i++){
		//busco un bj para cada ai
		while(j<m && b[j]<a[i]-1) j++; //si bj es chico busco uno mas grande
		(j<m && b[j]<=a[i]+1 && b[j]>=a[i]-1)? ans++,j++:0;// si bj esta a una distancia de 1 o 0 de a[i]
		
	}
	
	cout<<ans;
	
	return 0;
}
