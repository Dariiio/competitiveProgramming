#include <bits/stdc++.h>
// https://codeforces.com/contest/1143/problem/A
// ACCEPTED

using namespace std;

int main(){

	int n,v[200100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>v[i];

	int a = count(v,v+n,1);
	int b = count(v,v+n,0);

	int a2=0,b2=0;
	for(int i=0;i<n;i++){
		if(v[i]==1) a2++;
		else b2++;
		if(a2 == a) {
			cout<<i+1<<"\n";
			break;
		}
		else if(b2==b){
			cout<<i+1<<"\n";
			break;
		}
	}

	return 0;
}
