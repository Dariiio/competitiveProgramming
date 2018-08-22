#include<bits/stdc++.h>
using namespace std;

map<string,string> v;
string key,value;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	getline(cin,key);
	while(key!=""){
		stringstream ss(key);
		ss>>key>>value;
		v[value]=key;
		getline(cin,key);
	}
	while(cin>>key){
		map<string,string>::const_iterator iter=v.find(key);
		if(iter==v.end())
			cout<<"eh\n";
		else
			cout<<iter->second<<"\n";
	}

	/*
	for(map<string,string>::iterator it=v.begin();it!=v.end();it++){
		cout<<it->first<<" "<<it->second<<"\n";
	}*/

	return 0;
}