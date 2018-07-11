#include<bits/stdc++.h>
using namespace std;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int t,n, x;
	char c;
	string s;
	deque<int> v;
	cin>>t;
	while(t--){
		cin>>s>>n>>c;
		for(int i=0;i<n*2;i++){
			cin>>x>>c;
			v.push_back(x);
		}
		cout<<"\n";
		for(int i=0;i<n;i++)cout<<v[i]<<" ";
		v.clear();
	}
	return 0;
}
