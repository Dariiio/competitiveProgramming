#include <bits/stdc++.h>
// https://codeforces.com/contest/1163/problem/B1

// NO lo entiendo
using namespace std;

int main()
{
	int n,a[100100],cnt[100100];
	cin>>n;
	
	memset(cnt,0,sizeof(cnt));
	
	for(int i=0;i<n;i++)
		cin>>a[i],(i==n-1)?0:cnt[a[i]]++;
	
	for(int i=0;i<n;i++){
		if(cnt[i]!=*max_element(cnt,cnt+n) && cnt[i]!=0){
			cout<<n-1;
			return 0;
		}
	}
	cout<<n;
	
	return 0;
}
