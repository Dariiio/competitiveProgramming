#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	stack <int> p;
	while(cin>>n,n!=0){
		if(n==0) break;
		int v[n];
		bool ok=true;
		for(int i=0;i<n;i++) cin>>v[i];

		int ant=0;
		int e=1;
		for(int i=0;i<n;i++){
			if(v[i]==e)
				e++;
			else{
				if(abs(v[i]-ant)>1 && ant!=0){
					ok=false;
					//cout<<v[i]<<" "<<ant;
				}
				ant=v[i];
			}
		}
		ok?cout<<"yes\n":cout<<"no\n";
	}

	return 0;
}