#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> v;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	while(cin>>n){
		if(n!=-999999){
			v.pb(n);
			
		}else{
			cout<<"\n";
			for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
			v.clear();
		}
	}
	
	
	return 0;
}
