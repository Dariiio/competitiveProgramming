#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	string s;
	cin>>n>>s;
	int cnt=0;
	for(int i=1;i<n-1;i++)
		if(s[i-1]=='x'&&s[i]=='x'&&s[i+1]=='x')
			cnt++;
	cout<<cnt<<"\n";
	return 0;
}