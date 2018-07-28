//996B-codeforce
#include<bits/stdc++.h>
using namespace std;

long long n;
long long k[100010];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++)cin>>k[i];

	long long b=1,kk=1;
	while(true){
		if(b>=k[b-1])
			break;
		b++;kk++;
		if(kk>n)kk=1;
	}
	cout<<kk;


	return 0;
}