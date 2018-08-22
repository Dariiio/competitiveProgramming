#include<bits/stdc++.h>
using namespace std;

int n,m;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n>>m){
		if(n==0&&m==0)break;
		int count=0,num;
		set<int> a;
		while(n--){
			cin>>num;
			a.insert(num);
		}
		while(m--){
			cin>>num;
			set<int>::iterator it;
			it=a.find(num);
			if(it!=a.end())
				count++;
		}
		cout<<count<<"\n";
	}	
	return 0;
}