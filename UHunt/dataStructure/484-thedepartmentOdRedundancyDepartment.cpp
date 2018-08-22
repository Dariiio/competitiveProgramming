#include<bits/stdc++.h>
using namespace std;

vector<int>v;
map<int,int> f;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	while(cin>>n){
		if(f.count(n)==0){
			f[n]=1;
			v.push_back(n);
		}else
			f[n]++;
	}
	for(auto a: v){
		cout<<a<<" "<<f[a]<<"\n";
	}


	return 0;
}