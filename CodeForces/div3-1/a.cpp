#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//fropen("input.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	while(k--){
		if(n%10!=0){
			n-=1;
		}else{
			n/=10;
		}
	}
	cout<<n<<endl;

	return 0;
}