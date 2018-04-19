#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;
	string d;
	cin>>t;
	while(t--){
		cin>>n;
		n*=567;
		n/=9;
		n+=7492;
		n*=235;
		n/=47;
		n-=498;
		d=to_string(n);
		cout<<d.at(d.length()-2)<<endl;

		//otra solucion:
		// https://github.com/ackoroa/UVa-Solutions/blob/master/UVa%2011547%20-%20Automatic%20Answer/src/UVa%2011547%20-%20Automatic%20Answer.cpp
		//n = abs((((n * 63 + 7492) * 5 - 498)/10)%10);
		//cout<<n<<endl;
	}
	return 0;
}