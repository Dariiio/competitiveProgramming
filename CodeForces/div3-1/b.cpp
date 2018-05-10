#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//fropen("input.txt","r",stdin);
	int n;
	cin>>n;
	char s[n];
	cin>>s;
	vector <int> v, v2;
	for(int i=0;i<n-1;i++){
		v.push_back(count(s,s+n,s[i]+s[i+1]));
		v2.push_back(count(s,s+n,s[i+1]+s[i]));		
	}
	int max=0,max2=0, vmax, v2max;
	for(int i=0;i<v.size();i++){
		if(v[i]>max){
			max=i;
			vmax=v[i];
		}
	}
	for(int i=0;i<v2.size();i++){
		if(v2[i]>max2){
			max2=i;
			v2max=v[i];
		}
	}
	if(v2max>=vmax){
		cout<<s[max2+1]<<s[max2]<<endl;
	}else{
		cout<<s[max]<<s[max+1]<<endl;
	}
	//char asd[2]=s[max]+s[max+1];

	return 0;
}