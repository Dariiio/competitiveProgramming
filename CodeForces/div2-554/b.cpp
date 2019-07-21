#include <bits/stdc++.h>
// https://codeforces.com/contest/1152/problem/B

//https://codeforces.com/contest/1152/submission/53230107
using namespace std;

int main()
{
	
	int x;
	int a[100000];
	
	cin>>x;
	int k=0;int i=1;a[0]=0;
	while(k<1000000000)
	{
		k = k+k+1;
		a[i++] = k;
	}
	
	for(int j=0;j<i;j++){
		cout<<"2^"<<j<<": "<<a[j]<<"\n";
	}
	
	cout<<(4>>2);
	
	return 0;
}
