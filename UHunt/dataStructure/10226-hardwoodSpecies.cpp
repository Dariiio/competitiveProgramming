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
	cin>>t;
	while(t--){
		string s;
		while(getline(cin,s)){
			if(s==""){
				sort(vv.begin(),vv.end(),[](string a,string b){return a<b;});
				//cout<<"blancoooo\n";	
				float tot=0;
				for(auto a:vv) tot+=v[a];
				for(auto a:vv){
					cout<<a<<" ";
					printf("%.4f\n",(v[a]/tot)*100);
				}
				cout<<"\n";
				v.clear();
				vv.clear();
			}else{
				if(v.count(s)==0){
					v[s]=1;
					vv.push_back(s);
				}else{
					v[s]++;
				}
			}
		}
	}	
	return 0;
}