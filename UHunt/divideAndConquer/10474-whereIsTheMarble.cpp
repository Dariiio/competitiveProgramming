#include<bits/stdc++.h>
using namespace std;

int n,q,v[10000],pos,med,ax;

void bs(int min,int max){
	if(min<=max){
		med=(min+max)/2;
		if(v[med]==ax)
			pos=med;
		if(ax<=v[med])
			bs(min,med-1);
		else
			bs(med+1,max);
	}
}

int bs2(int min,int max){
	while(max-min>1){
		med=(max+min)/2;
		if(v[med]==ax)
			pos=med;
		if(ax<=v[med])
			max=med-1;
		else
			min=med+1;
	}
	return min;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int t=1;
	while(cin>>n>>q){
		if(n==0 && q==0)break;
		for(int i=0;i<n;i++)cin>>v[i];
		sort(v,v+n);
		printf("CASE# %d:\n", t);
		while(q--){
			cin>>ax;
			pos=-1;
			bs(0,n-1);
			//bs2(0,n-1);
			if(pos<0)
				printf("%d not found\n", ax);
			else
				printf("%d found at %d\n", ax,pos+1);
		}
		

		t++;
	}
	return 0;
}