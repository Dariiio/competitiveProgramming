#include <bits/stdc++.h>
using namespace std;

int P,B,K,N;
vector<int> v;

void cambiarbase(int x, int y){
   if ( x < y ){
	  v.push_back(x);      
      return;
   }
   int rem = x%y;
   cambiarbase(x/y, y);
   v.push_back(rem);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>P;
	while(P--){
		cin>>K>>B>>N;
		cambiarbase(N,B);
		int ans=0;
		for(auto a: v)
			ans+=(a*a);		
		cout << K << " " << ans <<"\n";
		v.clear();
	}
	return 0; 
}
