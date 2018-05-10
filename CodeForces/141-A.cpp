#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b,c, aux;
	while(cin>>a>>b>>c){
		aux=a+b;
		sort(aux.begin(),aux.end());
		sort(c.begin(),c.end());
		if(aux == c) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}