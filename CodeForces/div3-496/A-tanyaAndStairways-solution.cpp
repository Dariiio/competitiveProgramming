#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	vector<int>a;
	int p=-1;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x==1&&p!=-1)
			a.push_back(p);
		p=x;
	}	
	a.push_back(p);
	cout<<a.size()<<"\n";
	for(int i:a)
		cout<<i<<" ";
	
	/*for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	*/
	return 0;
}