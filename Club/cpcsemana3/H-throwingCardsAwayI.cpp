#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	queue<int> f;
	int n;
	while(cin>>n, n!=0){
		if(n==0) break;
		for(int i=1;i<=n;i++) f.push(i);
		if(f.size()==1){
			cout<<"Discarded cards:"<<"\n";
			cout<<"Remaining card: "<<f.front()<<"\n";
			f.pop();
		}else{
			cout<<"Discarded cards: ";
			while(f.size()>=2){
				(f.size()==2)? cout<<f.front()<<"\n":cout<<f.front()<<", ";
				f.pop();
				f.push(f.front());
				f.pop();
			}
			cout<<"Remaining card: "<<f.front()<<"\n";
			f.pop();		
		}
	}
	return 0;
}