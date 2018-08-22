#include<bits/stdc++.h>
using namespace std;

int t;
map<string,float> v;
vector<string> vv;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	scanf("%d\n\n",&t);
	string s;
	while(t--){
		int cont=0;
		while(getline(cin,s)){
			if(s==""){
				break;
			}
			if(v.count(s)==0){
				v[s]=1;
				vv.push_back(s);
			}else{
				v[s]++;
			}
		}
		sort(vv.begin(),vv.end(),[](string a,string b){return a<b;});
		float tot=0;
		for(auto a:vv) tot+=v[a];
		for(auto a:vv){
			cout<<a<<" ";
			printf("%.4f\n",(v[a]/tot)*100);
		}
		if(t>0)cout<<"\n";
		v.clear();
		vv.clear();	

	}	
	return 0;
}