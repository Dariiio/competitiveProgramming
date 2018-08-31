#include<bits/stdc++.h>
using namespace std;

int n,b;
stack<int> c;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b;
		if(c.empty()){
			c.push(b);
			continue;
		}
		if((c.top()+b)%2==0)
			c.pop();
		else c.push(b);
	}
	cout<<c.size()<<"\n";
	return 0;
}