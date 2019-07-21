#include <bits/stdc++.h>
// https://codeforces.com/contest/1183/problem/A

// ACCEPTED MUY FACIL
using namespace std;

int f(int n){
	int sum = 0;
	while(n >= 1){
		sum += n%10;
		n /= 10;
	}
	return sum;
}


int main()
{
	int a;
	cin>>a;
	while(true){
		if(f(a)%4 == 0){
			cout<<a;break;
		}else{
			a++;
		}
	}
	
	return 0;
}
