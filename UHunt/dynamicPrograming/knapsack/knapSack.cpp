#include<bits/stdc++.h>
using namespace std;

int v[]={20,5,10,40,15,25};
int w[]={1,2,3,8,7,4};

int knapSack(int n,int wt){
	if(wt<0)
		return INT_MIN;
	if(n<0||wt==0)
		return 0;
	int inlude=v[n]+knapSack(n-1,wt-w[n]);

	int exclude=knapSack(n-1,wt);

	return max(inlude,exclude);
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int wt=10;
	int n=sizeof(v)/sizeof(v[0])-1;
	
	cout<<knapSack(n,wt);

	return 0;
}