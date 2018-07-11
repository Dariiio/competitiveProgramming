#include<bits/stdc++.h>
using namespace std;

string s,t;

int f(){
	if(s.length()==t.length())
		if(s==t)
			return 0;
		else{
			s.erase(s.begin());
			t.erase(t.begin());
			return f()+2;
		}
	else if(s.length()>t.length()){
		s.erase(s.begin());
		return f()+1;
	}else if(s.length()<t.length()){
		t.erase(t.begin());
		return f()+1;
	}
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>s>>t;
	cout<<f();
	return 0;
}