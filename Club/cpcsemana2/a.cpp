#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	bool isjj;
	while(cin>>n){
		int x[n];
		isjj=true;
		for(int i=0;i<n;i++){
	
			cin>>x[i];
		}
		if(n==1) isjj=true;
		else{
			for(int i=0;i<n-1;i++){
				if(abs(x[i]-x[i+1])>n || abs(x[i]-x[i+1])<1) isjj=false;
			}
		}
		if(isjj) cout<<"Jolly"<<endl;
		else cout<<"Not jolly"<<endl;
	}
	return 0;
}