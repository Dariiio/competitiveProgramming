#include<bits/stdc++.h>
using namespace std;

int t,n,ct=0;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		ct++;
		cin>>n;
		char v[n];
		for(int i=0;i<n;i++)cin>>v[i];
		
		//sort(v,v+n);
		int cont=0;
		int i=0;
		while(i<n){
			if(v[i]=='.'){
					cont++;
					i+=3;
			}
			if(i>=n)break;
			if(v[i]=='#'){
				i++;
			}
		}
		
		cout<<"Case "<<ct<<": "<<cont<<"\n";
		
	}
	return 0;
}
