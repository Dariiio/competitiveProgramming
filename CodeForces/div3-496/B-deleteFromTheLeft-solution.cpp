#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	string s,t;
	cin>>s>>t;
	int w=0;
	while(true){
		int i=s.length()-w-1;
		int j=t.length()-w-1;
		if(i>=0 && j>=0 && s[i]==t[j])
			w++;
		else
			break;
	}
	cout<<s.length()+t.length()-2*w<<"\n";
	return 0;
}