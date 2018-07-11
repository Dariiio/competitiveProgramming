#include<bits/stdc++.h>
using namespace std;

//O(2^n)  alt+94 " ^ "
int fib(int n){
	int result;
	if(n==1 || n==2)
		result=1;
	else
		result=fib(n-1)+fib(n-2);
	return result;
}

int fib2(int n) {
    static std::vector<int> v;
    if (n <= 1)	return n;
    else if (n >= v.size())	v.resize(n+1);
    if (v[n] == 0)	v[n] = fib2(n-1) + fib2(n-2);// only recalc if we don't have a value
    
    return v[n];
}


int lookup[100];

void _inicialize(){
	for(int i=0;i<100;i++) lookup[i]=-1;
}
int fib3(int n){
	if(lookup[n]==-1){
		if(n<=1) lookup[n]=n;
		else lookup[n]=fib3(n-1)+fib3(n-2);
	}
	return lookup[n];
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	
	_inicialize();
	cout<<fib3(8);

	return 0;
}