#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		char c[100000];
		int p[100000];
		for(int i=0;i<k;i++){
			cin>>c[i];
			cin>>p[i];
		}
		int m;
		cin>>m;
		string text, aux;
		for(int i=0;i<=m;i++){
			getline(cin,aux);
			text+=aux;
		}
		long double total=0;
		for(int i=0;i<k;i++){
			long int aux;	
			aux=count(text.begin(),text.end(),c[i]);
			total += aux*p[i];
		}
		total /= 100;
		printf("%.2f$\n",(float)total);
	}
	return 0;
}