#include<bits/stdc++.h>
using namespace std;

int n,v[10100];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n){
		if(n==0)break;
		for(int i=0;i<n;i++)cin>>v[i];
		int sum=0,ans=0;
		for(int i=0;i<n;i++){
			sum+=v[i];
			ans=max(ans,sum);
			//cout<<sum<<" "<<ans<<endl;
			if(sum<0)sum=0;
		}
		(sum)?printf("The maximum winning streak is %d.\n",ans):printf("Losing streak.\n");
	}

	return 0;
}