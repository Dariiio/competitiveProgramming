#include<bits/stdc++.h>
using namespace std;

list<int>v;;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n,k,aux;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>aux;
		v.push_back(aux);
	}
	//for(int i=0;i<n;i++)cout<<v.front();
	int max=0;
	while((v.front()<=k || v.back()<=k)&&!v.empty()){
		if(v.front()<=k){
			v.pop_front();
			max++;
		}else if(v.back()<=k){
			v.pop_back();
			max++;
		}
	}
	cout<<max;

	return 0;
}