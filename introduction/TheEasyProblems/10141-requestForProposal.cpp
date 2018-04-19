//REHACER
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, p;	//n number de requeriment - p number de proposal
	int d, r;	//d es price - r requeriment cumplidos
	string nameReque, nameP, bestP;
	int bestD = 999999999, bestReMet = -1;
	while(cin>>n>>p, n || p){
		for(int i=0;i<n;++i){
			cin.ignore();
			getline(cin, nameReque);
		}
		int countP=0;
		while(p--){
			countP++;
			getline(cin, nameP);
			cout<<endl;
			cin>>d>>r;
			for(int e=0;e<r;++e){
				getline(cin, nameReque);
			}
			if(r>bestReMet ||(r==bestReMet && d < bestD) || bestReMet==-1){
				bestReMet = r;
				bestD = d;
				bestP = nameP;
			}
		}
		if(countP){
			cout<<"RFP #"<<countP<<endl;
			cout<<bestP<<endl;
		}
	}
	return 0;
}
