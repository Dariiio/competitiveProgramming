#include <bits/stdc++.h>
//https://codeforces.com/contest/1151/problem/A

//PRETEST ACCEPTED
using namespace std;

int f(int a,int b){
	int tmp=a;int c1=0,c2=0;
	while(tmp!=b){
		tmp+=1;
		if(tmp>26)
			tmp=1;
		c1++;
	}
	tmp = a;
	while(tmp!=b){
		tmp-=1;
		if(tmp<1){
			tmp=26;
		}
		c2++;
	}
	return min(c1,c2);
}

int main(){
	int n,v[100];char s;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		v[i] = s -'A'+1;
	}
	//A C T G
	//1 3 20 7;

	int ans=0,anns=99999999;
	for(int i=0;i<n-3;i++){
		ans = 0;
		if(v[i] != 1){
			ans += f(v[i],1);
		}
		if(v[i+1] != 3){
			ans += f(v[i+1],3);
		}
		if(v[i+2] != 20){
			ans += f(v[i+2],20);
		}
		if(v[i+3] != 7){
			ans += f(v[i+3],7);
		}
		
		ans= min(ans,anns);
		anns = ans;
	}
	
	cout<<anns;
	return 0;
}
