#include <bits/stdc++.h>


using namespace std;

int main()
{
	int n,cnt[100000],ax,sum=0;
	cin>>n;
	memset(cnt,0,sizeof(cnt));
	
	for(int i=0;i<n;i++){
		cin>>ax;
		(ax==4)?sum++:cnt[ax]++;
	}	
	
	
	
	
	
	for(int i=0;i<n;i++){
		cin>>ax;
		if(ax == 4) sum++;
		if(ax == 3)
		{
			sum++;
			if(cnt[1]>0) cnt[1]--;
			else cnt[3]++;
		}
		if(ax == 1)
		{
			if(cnt[3]>0) cnt[3]--,sum++;
			else if(cnt[2]>0) cnt[2]--,sum++;
			else cnt[1]++;
		}
		if(ax == 2)
		{
			if(cnt[1]>0) cnt[1]--,sum++;
			else cnt[2]++;
		}
	}
	sum += cnt[1]/4 + (cnt[2]*2)/4;
	
	cout<<sum<<"\n";
	
	return 0;
}
