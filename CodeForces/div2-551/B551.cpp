#include <bits/stdc++.h>
// https://codeforces.com/contest/1153/problem/B

//ACCEPTED
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n,m,h,left[110],front[110],top[110][110];
	cin>>n>>m>>h;
	for(int i=0;i<m;i++) cin>>front[i];
	for(int i=0;i<n;i++) cin>>left[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>top[i][j];
			if(top[i][j]){
				top[i][j] = min(front[j],left[i]);
			}
			cout<<top[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	return 0;
}
