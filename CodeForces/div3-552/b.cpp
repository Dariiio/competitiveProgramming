#include <bits/stdc++.h>
// https://codeforces.com/contest/1154/problem/B

//ACCEPTED
// hard hay que DIBUJAR MUCHO (recta real)
using namespace std;


int main(){
	int n;
	vector<int> a;

	cin>>n;
	//Solo elementos no repetidos
	for(int i=0;i<n;i++){
		int ax;cin>>ax;
		if(!count(a.begin(),a.end(),ax))
		{
			a.push_back(ax);
		}
	}
	sort(a.begin(),a.end());
	

	//for(int i=0;i<(int)a.size();i++) cout<<a[i]<<" ";
	//cout<<a.size()<<"--\n";

	if(a.size()>3)
		cout<<-1;
	if(a.size()==3){
		if(a[1]-a[0] == a[2]-a[1]) cout<<a[1]-a[0];
		else cout<<-1;
	}
	if(a.size()==2){
		if((a[1]-a[0])%2 == 0) cout<<(a[1]-a[0])/2;
		else cout<<(a[1]-a[0]);
	}
	if(a.size()==1)
		cout<<0;


	return 0;
}
