#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n,v[1001];
	cin>>n;
	for(int i=0;i<n;i++)cin>>v[i];

	int maxrep=0,maxtot=0;
	for(int i=0;i<n;i++){
		maxrep=0;
		for(int j=0;j<n;j++){
			if(v[i]==v[j])
				maxrep++;
		}
		if(maxrep>maxtot)
			maxtot=maxrep;
	}	
	cout<<maxtot;
	return 0;
}