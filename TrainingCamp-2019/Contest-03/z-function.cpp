#include <bits/stdc++.h>


using namespace std;

vector<int> zf(string s){
	int n=(int) s.length();
	vector<int> z(n);
	for(int i=1;i<n;++i)
		while(i + z[i] < n && s[z[i]] == s[i + z[i]] )
			++z[i];
	return z;
}



int main()
{
	string s;
	cin>>s;
	
	vector<int> v = zf(s);
	
	for(auto a: v) cout<<a;
	

	return 0;
}
