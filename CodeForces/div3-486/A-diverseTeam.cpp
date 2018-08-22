#include<bits/stdc++.h>
using namespace std;

int n,k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n>>k;
	set<int> el;
	vector<int> ans;
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		if(!el.count(x)){
			ans.push_back(i);
			el.insert(x);
		}
	}
	if(ans.size()<k)
		cout<<"NO\n";
	else{
		cout<<"YES\n";
		for(int i=0;i<k;++i)
			cout<<ans[i]+1<<" ";
		cout<<"\n";
	}

	return 0;
}