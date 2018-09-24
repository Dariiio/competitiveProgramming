#include <bits/stdc++.h>
using namespace std;

int n,m;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//cin>>n>>m;
	while(cin>>n>>m){
		vector<int> v;
		int cont=0;
		for(int i=n;i<=m;i++){
			int numb=i;
			set<int> a;
			bool p=true;
			while(numb){
				int dig=numb%10;
				numb=numb/10;
				if(a.count(dig)){
					p=false;	
				}else{
					a.insert(dig);
				}
			}
			if(p) cont++;
		}
		cout<<cont<<"\n";
	}
	return 0;
}
