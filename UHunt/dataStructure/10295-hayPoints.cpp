#include<bits/stdc++.h>
using namespace std;

int n,m;
map<string,int> v;
string s;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n>>m;
	while(n--){
		string a;int b;
		cin>>a>>b;
		v[a]=b;
	}
	int maxi=0,puntos=0;
	while(cin>>s){
		//cout<<s<<"\n";
		int rep=v.count(s);
		if(rep>=1){
			//cout<<v[s]<<"---\n";
			maxi+=v[s]*rep;
		}
		if(s=="."){
			puntos++;
			cout<<maxi<<"\n";
			maxi=0;
		}
		if(puntos==m)break;
	}
	return 0;
}