#include <bits/stdc++.h>
// https://codeforces.com/contest/1136/problem/B

//ACCEPTED
//Sin casos de prueba y dibujo no sale
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int n,k;
	cin>>n>>k;

	if(k==1 || k==n)
		cout<<n*3;
	else
		cout<<n*3 + min(n-k,k-1);


	return 0;
}
