#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	char s[1000];
	cin>>n>>s;
	//reverse(s,s+n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			reverse(s,s+i);
			//cout<<s<<"\n";
		}
	}
	cout<<s;


	return 0;
}