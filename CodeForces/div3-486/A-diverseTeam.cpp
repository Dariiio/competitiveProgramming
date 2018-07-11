#include<bits/stdc++.h>
using namespace std;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n,k,v[1000];
	vector<int> v2;
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>v[i];

	v2.push_back(v[0]);
	for(int i=0;i<n;i++){
		if(count(v2.begin(),v2.end(),v[i])==0){
			v2.push_back(v[i]);
		}
	}
		
	if(v2.size()==k){
		cout<<"YES\n";
		for(int i=0;i<v2.size();i++){
			for(int j=0;j<n;j++){
				if(v2[i]==v[j]){
					if(i==v2.size()-1)
						cout<<j+1;
					else
						cout<<j+1<<" ";
					break;
				}
			}
		}
	}else{
		cout<<"NO\n";
	}

	return 0;
}
/*
int n,k,app[101],ans[101],cnt;

int main(){
	cin>>n>>k;
	for(int i=1,a;i<=n;i++){
		cin>>a;
		if(!app[a]){
			app[a]++;
			ans[++cnt]=i;
		}
	}
	if(cnt>=k){
		cout<<"YES\n";
		for(int i=1;i<=k;i++)cout<<ans[i]<<' ';
	}
	else cout<<"NO";
	return 0;
}
*/