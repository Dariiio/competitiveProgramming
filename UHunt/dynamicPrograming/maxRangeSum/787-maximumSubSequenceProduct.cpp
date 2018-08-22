#include<bits/stdc++.h>
using namespace std;

long long n;
vector<int> v;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n){
		if(n!=-999999){
			v.push_back(n);
		}else{
			long long sum=1,ans=-999999;
			for(int i=0;i<v.size();i++){
				sum=1;
				for(int j=i;j<v.size();j++){
					sum*=v[j];
				}
				ans=max(ans,sum);
			}
			printf("%lld\n",ans);
			v.clear();
		}
	}
	return 0;
}