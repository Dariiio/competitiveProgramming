#include <bits/stdc++.h>
using namespace std;

long unsigned int f(int n){
	long unsigned int s=0,d;
	while(n){
		d = n%10;
		s+=d;
		n /= 10;
	}
	return s;
}

int main() {
	long unsigned int n;
	while(cin>>n,n!=0){
		while(n/10>0){
			n=f(n);
		}
		cout<<n<<endl;
	}

	return 0;
}
