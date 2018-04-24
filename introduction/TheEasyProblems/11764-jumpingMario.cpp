#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n, h[50];
	int cA, cB, ts=0;
	cin>>t;
	while(t--){
		ts++;
		cin>>n;
		cA=0;cB=0;
		for(int i=0;i<n;i++){
			cin>>h[i];
		}
		for(int i=0;i<n-1;i++){
			if(h[i]>h[i+1]) cB++;
			else if(h[i]<h[i+1]) cA++;
		}
		cout<<"Case "<<ts<<": "<<cA<<" "<<cB<<endl;
	}
	return 0;
}