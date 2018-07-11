#include<bits/stdc++.h>
using namespace std;

int t,n;

int f(float a[], float b[]){
	float d=0,fine=0;
	for(int i=0;i<n;i++){
		fine+=(b[i]/a[i])*d;
		d+=a[i];
	}
	return fine;
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		float a[n],b[n],task[n];
		for(int i=0;i<n;i++){
			cin>>a[i]>>b[i];
			task[i]=i+1;
		}
		float t2[n];
		for(int i=0;i<n;i++) t2[i]=task[i];
		float min=90000;
		do{
			float aux=f(a,b);
			if (aux<min){
				min=aux;
				if(lexicographical_compare(task,task+n,t2,t2+n)){
					for(int i=0;i<n;i++) t2[i]=task[i];
				}			
			}
			next_permutation(a,a+n);
			next_permutation(b,b+n);
		}while(next_permutation(task,task+n));
		for(int i=0;i<n;i++) cout<<t2[i]<<" ";
		cout<<"\n";
		cout<<min;
	}
	
	return 0;
}
