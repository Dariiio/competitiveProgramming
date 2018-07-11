#include<bits/stdc++.h>
using namespace std;


//version botton-up
int f(int v[], int n){
	int lis[n], max=0;
	for(int i=0;i<n;i++)lis[i]=1;
	
	for(int i=1;i<n;i++)
		for(int j=0;j<i;j++)
			if(v[i]>v[j] && lis[i]<lis[j]+1)
				lis[i]=lis[j]+1;
	
	for(int i=0;i<n;i++)
		max<lis[i]?max=lis[i]:0;
	return max;
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int v[n];
		for(int i=0;i<n;i++)cin>>v[i];
		cout<<f(v,n)<<"\n";
		
	}
	return 0;
}
