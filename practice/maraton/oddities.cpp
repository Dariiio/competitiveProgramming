#include<bits/stdc++.h>
using namespace std;

int t,n;

int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2==0){
			printf("%d is even\n", n);
		}else{
			printf("%d is odd\n", n);
		}
	}
	return 0;
}