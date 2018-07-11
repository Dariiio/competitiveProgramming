#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("inG.txt","r",stdin);
	int n,d;
	cin>>n;
	d=n;
	n*=2;
	int v[n];
	int sal[d];
	for(int i=0;i<d;i++) sal[i]=-1;
	for(int i=0;i<n;i++) cin>>v[i];
	for(int i=0;i<n-1;i++){
		if(v[i]==0 && v[i+1]!=0) sal[1]=v[i+1];
		if(v[i]!=0 && v[i+1]==0) sal[d-2]=v[i]; 
	}
	
	//for(int i=0;i<d;i++) cout<<sal[i]<<" ";
	//cout<<endl;
	
	for(int i=0;i<n-1;i+=2){
		for(int e=0;e<d-2;e++){
			if(v[i]==sal[e] ){
				sal[e+2]=v[i+1];
			}
		}
		for(int e=1;e<d;e++){
			if(v[i+1]==sal[e] ){
				sal[e-2]=v[i];
			}
		}
	}

	for(int i=0;i<n-1;i+=2){
		for(int e=0;e<d-2;e++){
			if(v[i]==sal[e] ){
				sal[e+2]=v[i+1];
			}
		}
		for(int e=1;e<d;e++){
			if(v[i+1]==sal[e] ){
				sal[e-2]=v[i];
			}
		}
	}


	for(int i=0;i<d;i++) cout<<sal[i]<<" ";
	return 0;
}