#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int t;
	queue <int> q;
	cin>>t;
	while(t--){
		int k, aux;
		cin>>k;
		if(k==1){
			cin>>aux;
			q.push(aux);
		}else if(k==2){
			if(q.empty()){
				continue;
			}else{
				q.pop();
			}
		}else if(k==3){
			if(q.empty())
				cout<<"Empty!\n";
			else
				cout<<q.front()<<"\n";
		}
	}


	return 0;
}