#include <bits/stdc++.h>
using namespace std;

int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	freopen("input.txt","r",stdin);
	int n;
	stack <int> p;
	while(cin>>n, n!=0){
		int v[n], sal[n];
		for(int i=0;i<n;i++) cin>>v[i];
		bool ok=true;

		int e=1;
		for(int i=0;i<n;i++){
			if(v[i]==e){
				sal[e-1]=v[i];
				e++;
			} 
			else{
				p.push(v[i]);
			}
		}
		e--;
		
		/*
		//DEBUG
		cout<<e;
		cout<<"\n";
		for(int i=0;i<e;i++) cout<<sal[i]<<" ";
		cout<<"\n";
		stack<int> aux = p;
		while(aux.size()){
			cout<<aux.top()<<" ";
			aux.pop();
		}
		//----*/
		
		while(p.size()){
			sal[e]=p.top();
			p.pop();
			e++;
		}


		//DEBUG
		//cout<<"\n";
		//for(int i=0;i<n;i++) cout<<sal[i]<<" ";
		//----	

		for(int i=0;i<n;i++){
			if(sal[i]!=i+1) ok=false;
		}

		if(ok) cout<<"yes\n";
		else cout<<"no\n";
	}



	return 0;
}