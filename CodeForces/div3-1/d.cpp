#include <bits/stdc++.h>
using namespace std;

bool caca(char i, char j){
	return (i/3==j || j==i*2);
	//return j==i*2;
	//return i/3==j;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//fropen("input.txt","r",stdin);
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s, s+n, caca);
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
	cout<<"\n";
	return 0;
}