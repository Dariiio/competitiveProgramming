#include <bits/stdc++.h>
// https://codeforces.com/contest/1151/problem/B


//ACCEPTED
// HARD
using namespace std;

int n,m,res,b[505][505],ans[505];
vector<int> seq[505];

int main(){
	
	cin>>n>>m;
	int lst = -1; //ultima seq;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>b[i][j];
			// Solo agrega elementos no rep en la seq
			if(seq[i].empty() || b[i][seq[i].back()] != b[i][j])
				seq[i].push_back(j);
		}
		//Guarda las pos de la ultima seq que tuvo más de un elemento
		if(seq[i].size() > 1)
			lst = i;
		ans[i] = 0;res ^= b[i][0];
	}
	if(res == 0){
		//si res = 0 y no encontro ninguna seq, a la casa
		if(lst == -1){
			cout<<"NIE\n";
			return 0;
		}
		else{
			// NO esntiendo esta parte...
			res ^= b[lst][0] ^ b[lst][seq[lst][1]];
			ans[lst] = seq[lst][1];
		}
	}
	cout<<"TAK\n";
	for(int i=0;i<n;i++)
		cout<<ans[i]+1<<" ";

	

	return 0;
}
